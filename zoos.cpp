/*You are required to enter a word that consists of  and  that denote the number of Zs and Os respectively. The input word is considered similar to word zoo if .

Determine if the entered word is similar to word zoo.

For example, words such as zzoooo and zzzoooooo are similar to word zoo but not the words such as zzooo and zzzooooo.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i;
    int o=0,z=0;
    for(i=0;i<s.length();i++)
    {
        if(s[i]=='z')
        {
            z++;
        }
        else if(s[i]=='o')
        {
            o++;
        }
    }
    if(z*2==o)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}