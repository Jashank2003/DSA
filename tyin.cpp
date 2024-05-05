// Online C++ compiler to run C++ program online
#include <bits/stdc++.h>
using namespace std;

    void merge(int *arr , int s ,int  e){
        
       int mid = (s+e)/2;
        int len1 =  mid -s+1;
        int len2 = e - mid;
        
        int *first = new int [len1];
        int *second = new int [len2];
        
        int m_a_i = s;
        for(int i = 0 ; i<len1; i++){
         first[i] = arr[m_a_i++];
        }
        
         m_a_i = mid+1;
        for(int i= 0 ; i<len2 ;i++){
            second[i] = arr[m_a_i++];
        }
        
        int index1 =0;
        int index2 = 0;
        m_a_i = s;
        
        
        while(index1<len1 && index2<len2){
            
            if( first[index1]<second[index2]){
                arr[m_a_i++] = first[index1++];
            }
            else{
                arr[m_a_i++] = second[index2++];
        }
        }
        while(index1<len1){
            arr[m_a_i++] = first[index1++];
        }
        
         while(index2<len2){
          arr[m_a_i++] = second[index2++];
        }
        
    }

   void mergesort( int *arr , int s, int e){
       
       if(s>=e){
           return ;
       }
       
       int mid = (s+e)/2;
       mergesort(arr , s, mid);
       mergesort(arr , mid +1 , e);
       
       merge( arr , s, e);
   }
        
    

int main() {
    int arr[5] = {2,5,1,7,2};
    int n = 5;
    
    mergesort( arr ,0 , n-1);
    
    for(int i =0 ; i<n ; i++){
        cout<<arr[i]<<" ";
    }

    return 0;
}