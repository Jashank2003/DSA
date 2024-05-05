// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

void towerofhanoi(int s , int e , char source , char aux , char des){
    
    if(s >e ){
        return ; 
    }
    
    towerofhanoi(s ,e-1 , source ,des , aux);
    cout<< "Move " <<e<<"From "<<source<<"to "<<des<<endl;
    towerofhanoi(s ,e-1 ,aux, source , des);
    
}

int main() {
    
    towerofhanoi(1,2,'A','B','C');
    return 0;
}