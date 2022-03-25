#include <iostream>

using namespace std;

int main() {

    int N = 0;
    int x;
    int i;
    cin>>N;

    long data[N];
    for( i=0; i<N; i++)
        cin>>data[i];
      


    // write your code here
    // ans = 
    if(data[N-1]%10==0)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }



    return 0;
}