#include<bits/stdc++.h>

using namespace std;


vector<int> reverse( vector<int> a){

  int s = 0;
  int e = a.size()-1;

  while(s<=e){
    swap( a[s] , a[e]);

    s++;
    e--;
  }
  return a;

}

void print( vector<int> a){

    for (int i =0 ; i<a.size() ; i++){

        cout<<a[i]<<" ";

    }
}

int main(){

    vector<int> b;

    b.push_back(3);
    b.push_back(7);
    b.push_back(5);
    b.push_back(42);
    b.push_back(11);

    vector<int> ans = reverse(b);

    print(ans);




    return 0;
}   