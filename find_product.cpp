/*You have been given an array A of size N consisting of positive integers. You need to find and print the product of all the number in this array Modulo .*/
#include <iostream>
#include <vector>
using namespace std;
int main() {
    int n;
    cin >> n;    //Reading input from STDIN
    vector<int>arr(n);
    long long int prod=1;
    int num;
    for(int i=0;i<n;i++){
        cin>>num;
        arr[i]=num;

    }
    for(int i=0;i<n;i++){
prod=(prod*arr[i])%(1000000007);
    }
    cout<<prod;

}