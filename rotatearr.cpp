#include<bits/stdc++.h>

using namespace std;


    vector<int> rotate( vector<int> &num , int k){

        vector<int> vec(num.size());

        for(int i = 0 ; i<num.size() ; i++){

            vec[(i+k) %num.size()] = num[i];
        }
        num = vec;
        return num;

    }
    
    
int main(){
    
    vector<int> num;
    num.push_back(1);
    num.push_back(2);
    num.push_back(3);
    num.push_back(43);
    num.push_back(4);
      for(int i : num){
            cout<<i<<" ";
        }
        cout<<endl;

    rotate( num , 2);

         for(int i : num){
            cout<<i<<" ";
        }
    
    
    return 0;
}