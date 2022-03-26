/*Arpasland has surrounded by attackers. A truck enters the city. The driver claims the load is food and medicine from Iranians. Ali is one of the soldiers in Arpasland. He doubts about the truck, maybe it's from the siege. He knows that a tag is valid if the sum of every two consecutive digits of it is even and its letter is not a vowel. Determine if the tag of the truck is valid or not.

We consider the letters "A","E","I","O","U","Y" to be vowels for this problem.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int flag=0;
    
    if(((s[0]-'0')+(s[1]-'0'))%2!=0)
    {
   
        flag=1;
        goto label;

    }
    else if(((s[3]-'0')+(s[4]-'0'))%2!=0)
    {
  
           flag=1;
        goto label;
    }
    else if(((s[4]-'0')+(s[5]-'0'))%2!=0)
    {
       
           flag=1;
        goto label;
    }
    else if(((s[7]-'0')+(s[8]-'0'))%2!=0)
    {
       
           flag=1;
        goto label;
    }
    else if(s[2]=='A' ||s[2]=='E'||s[2]=='I' ||s[2]=='O'||s[2]=='U' ||s[2]=='Y' )
    {
        
           flag=1;
        goto label;

    }
    label:
    if(flag==1)
    {
        cout<<"invalid";
    }
    else
    {
        cout<<"valid";
    }

}