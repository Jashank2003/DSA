#include<bits/stdc++.h>

using namespace std;

string reverse(string wordiee)

{
    int st = 0;
    int e = wordiee.length() - 1;
    while (st < e)
    {
        swap(wordiee[st++], wordiee[e--]);
    }
    return wordiee;
}

int main(){

    string sent ;
    getline(cin , sent);
    // cout<<sent.length();
    // cout<<endl;

        
    string word = "";
    // cout<<word;

    for(int i =0 ;  i<=sent.length() ; i++){

        if(sent[i] != ' ' && i < sent.length()){
        word.push_back(sent[i]);
        }
        else{
        cout<<reverse(word)<<" ";
        word ="";
        }
    }
    
    
    


    return 0;
}