#include<iostream>

using namespace std;

 long long int squareroot( int arr[],int num ){

    int s = 0;
    int e = num;
     long long  int  mid = (s+e)/2;
    int ans =0;


    while(s<=e){
        if( arr[mid]*arr[mid] > num){
            e = mid -1;
        }

        else if( arr[mid]*arr[mid] == num){

            return mid;
        }
        else{
             ans = arr[mid];
             s =mid +1;
        }
        mid = (s+e)/2;
    }
    return ans;


}

double  moreprecisionsol( int solution, int precision , int num){

        double factor =1;
        double ans = solution;
        for( int i =0 ; i<precision ; i++){
            factor = factor/10;

            for(double j = ans; j*j<num ; j = j+factor){
                ans = j;
            }
        }
        return ans;
    
}

int main(){
      long long int num ;
     cin>>num;
     int arr[num];



     for(int i=0 ; i<=num; i++){

        arr[i] =i;
  }
     
      int solution = squareroot(arr ,num);
      cout<<moreprecisionsol(solution ,3 , num)<<endl;
    


    return 0;
}