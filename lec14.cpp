#include<iostream>

using namespace std;

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

int binarysearch( int arr[], int s ,int e, int key){

    int start =s;
    int end =e;
    while(start<=end){
      int mid = (s+e)/2;   
      // mid also equals to this  s + (e-s)/2; more efficent
        if(arr[mid] == key){
            return mid;
             
        }
        else if(key>arr[mid]){
            start=mid +1;
        }
        else {
            end = mid -1;
        }
    }
    return -1;
}

int main(){

   int arr[5]={7,8,1,2,3};
   int k=8;
   
   int n= 5;
 
  int pivot = getpivot(arr ,5);
  if(  k>=arr[pivot] && k<=arr[n-1]){
    
   return binarysearch(arr , pivot, n-1 ,k);

  }
  else{
    return binarysearch(arr ,0 , pivot-1 , k);
  }
    
    return 0;
}