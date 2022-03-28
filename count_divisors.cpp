#include <iostream>
using namespace std;
int main() {
	int l,r,k;
	cin>>l>>r>>k;
	int cnt=0;
	int i;
	for(i=l;i<=r;i++)
	{
		if(i%k==0)
		{
			cnt++;
		}
	}
	cout<<cnt;
}
