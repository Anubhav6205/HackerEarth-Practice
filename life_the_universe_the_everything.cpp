/*Your program is to use the brute-force approach in order to find the Answer to Life, the Universe, and Everything. More precisely... rewrite small numbers from input to output. Stop processing input after reading in the number 42. All numbers at input are integers of one or two digits.*/
#include <iostream>
#include <bits/stdc++.h>
#include <vector>
using namespace std;

int main() {
    vector<long long>x;
    long long num;
    int i,j;
    for(i=0;i<1000000;i++)
    {
        cin>>num;
        if(num==42)
        {
            goto label;
        }
        else
        {
            x.push_back(num);
        }

    }
    label:
    for(j=0;j<x.size();j++)
    {
        cout<<x[j]<<endl;
    }

    return 0;
}