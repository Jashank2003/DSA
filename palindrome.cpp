// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

char tolowercase(  char ch){

    if(ch>='a' && ch<='z'){
        return ch;
    }
    else{
        char temp = ch-'A' +'a';
        return temp;
    }
}

int getlength(char s[])
{
    int count = 0;
    for (int i = 0; s[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}

void reverse(char s[], int n)
{
    int st = 0;
    int e = n - 1;
    while (st < e)
    {
        swap(s[st++], s[e--]);
    }
}

void palindrome(char s[], int n)
{
    int st = 0;
    int e = n - 1;
    bool flag = false;

    while (st < e)
    {

        if (s[st] != s[e])
        {
            cout << "NO" << endl;
            break;
        }
        else
        {
            st++;
            e--;
            flag = true;
        }
    }
    if (flag == true)
    {
        cout << "YES" << endl;
    }
}

int main()
{

    char s[20];
    cin >> s;

    int len = getlength(s);
    cout << "length of the string:" << len << endl;
    reverse(s, len);
    cout << "Reverse of The string is : " << s << endl;
    cout << "check palindrome" << endl;
    palindrome(s, len);
    cout<<endl;
    cout<<tolowercase('B')<<endl;
    cout<<tolowercase('a')<<endl;

    return 0;
}