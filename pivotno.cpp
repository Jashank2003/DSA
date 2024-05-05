#include<iostream>

using namespace std;


// int main(){
     
//       int arr[6] = {4,9,1,0,2,3};

//       for(int i =0 ; i<5 ;i++){
//         int count =0;
//         for( int j =0 ; j<5 ;j++){
//             if( arr[i]<=arr[j]){
//             ++count;
//             }
//         }
//         if(count == 5)
//         cout<<arr[i];
//       }

//     return 0
//     ;
// }

int getpivot( int arr[],int n){

    int s =0;
    int e =n-1;
    int   mid = s+ (e-s)/2;

    while (s<e){

        if( arr[mid] >= arr[0]){

            s =mid+1;
        }
        else{
            e =mid;
        }
        mid = s+ (e-s)/2;
    }
    return s;
}
int main(){

    int arr[5] ={7,8,4,5,6};
    
    cout<<getpivot( arr ,5);
    return 0;
}