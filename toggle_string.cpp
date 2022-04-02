/*You have been given a String S consisting of uppercase and lowercase English alphabets. You need to change the case of each alphabet in this String. That is, all the uppercase letters should be converted to lowercase and all the lowercase letters should be converted to uppercase. You need to then print the resultant String to output.*/
#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main() {
	string ch;
	cin>>ch;
	int i;
	for(i=0;i<ch.length();i++){

		char kriti=ch[i];
		if(kriti>='a' && kriti<='z'){
			ch[i]-=32;
		}
       else if(kriti>='A' && kriti<='Z'){
			ch[i]+=32;
		}
	}
	cout<<ch;

}