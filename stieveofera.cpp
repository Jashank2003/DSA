#include<bits/stdc++.h>

using namespace std;

    int countprime(int n){
        // cout<<"hii"<<endl;

    int cnt=0;
    vector<bool> prime(n+1 , true);
    prime[0] = prime[1] = false;

    for(int i = 2; i<n ; i++){

        if(prime[i]){
            cnt++;

            for(int j =2*i ;j<n; j= j+i){
                prime[j] =0;
            }
        }
    }

    for(int i =2; i<n ; i++){
        if(prime[i]==true){
            cout<<i<<" ";
        }
    }
    return cnt;
    }

int main(){
    int n;
    cin>>n;
    countprime(n);

    return 0;
}