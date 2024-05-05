#include<bits/stdc++.h>

using namespace std;

char  getmaxoccurance(string s){
    int arr[26] ={0};


    for(int i = 0 ; i<s.length(); i++){
            int number = 0;

        if( s[i]>='a' && s[i]<='z'){
            number = s[i] - 'a';
        }
        else if(s[i]>='A' && s[i]<='Z'){
            number = s[i] -'A';
        }
        arr[number]++;
    }



        int maxi = -1;
        int ans = 0;         
    for(int i = 0 ; i<26 ; i++){
        if( maxi<arr[i]){
            maxi = arr[i];
            ans = i;
        }
    }
    return 'a'+ans;

}

int main(){
    
    string s;
    cin>>s;
    cout<<getmaxoccurance(s);




    return 0;
}