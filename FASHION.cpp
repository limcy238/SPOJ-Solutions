#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n,i,sum;
	for(cin>>t;t--;)
	{
		cin>>n;
		int a[n],b[n],sum=0;
		for(i=0;i<n;++i)
			cin>>a[i];
		for(i=0;i<n;++i)
			cin>>b[i];	
		sort(a,a+n);
		sort(b,b+n);
		for(i=0;i<n;++i)
			sum+=a[i]*b[i];
		cout<<sum<<"\n";
	}
	return 0;
}
