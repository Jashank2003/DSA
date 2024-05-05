#include<bits/stdc++.h>

using namespace std;

class Stack {
    public:
    int *arr;
    int top;
    int size;

    Stack(int size){
        this ->size = size;
        arr = new int[size];
        top = -1;
    }

    void push(int element){

        if(size - top >1){
            top++;
            arr[top] = element; 
        }
        else{
            cout<<"Stack is Overflow"<<endl;
        }

    }
    void pop(){

        if (top >= 0){
            // cout<<arr[top]<<" is popped"<<endl;
            top--;

        }
        else{
            cout<<"Stack is Underflow"<<endl;
        }

    }
    int peek(){
        if(top >= 0 && top<size){
            return arr[top];
        }
        else{
            cout<<"Stack is Empty"<<endl;
            return -1;
        }

    }
    bool isEmpty(){
        if(top == -1){
            return true;
        }
        else{
            return false;
        }

    }

};

int main(){

    Stack st(5);
    st.push(34);
    st.push(23);
    st.push(234);
    st.push(67);
    st.push(2);
    // st.push(23);
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.isEmpty();
    cout<<st.peek()<<endl;
    if(st.isEmpty()){
        cout<<"Stack is Emptyyyy"<<endl;
    }
    else{
        
        cout<<"Stack is Not Emptyyyy"<<endl;
    }
    
    
    return 0;
}