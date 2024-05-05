#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--){
	    int n;
	    cin>>n;
	    int k = 2*n;
	    int arr[k];
	    
	    for(int i =0 ; i<k; i++){
	        cin>>arr[i];
	    }
	    
	     sort(arr ,arr + k);
         for (int i = 0 ; i<k ; i++){
            cout<<arr[i]<<endl;
         }
	     int count =0 ;
	     for(int i =0 ; i<k-1 ; i++){
	         if(arr[i] == arr[i+1]){
	             count++;
	             if(count >1){
	                //  cout<<"NO"<<endl;
	                 break;
	             }
	         }
	         else{
	             count = 0;
	         }
	     }
         if(count >1){
            cout<<"NO"<<endl;
         }
         else{

	     cout<<"YES"<<endl;
         }
	         
	    
	}
	return 0;
}

