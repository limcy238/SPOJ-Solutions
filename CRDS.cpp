#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long int t,n;
	for(cin>>t;t--;)
	{
		cin>>n;
		cout<<((n*n+n)+(n*n-n)/2)%1000007<<"\n";
	}
	return 0;
}
