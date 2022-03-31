/*You have been given a String S. You need to find and print whether this string is a palindrome or not. If yes, print "YES" (without quotes), else print "NO" (without quotes).*/
#include <bits/stdc++.h>
#include <vector>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string save=s;
    reverse(s.begin(),s.end()); 
    if(s==save)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}