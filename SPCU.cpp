#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n,i,flag;
	for(cin>>t;t--;)
	{
		cin>>n;
		int a[n+1];
		flag=0;
		cin>>a[1];
		if(a[1]!=0)
		++flag;
		for(i=2;i<=n;++i)
		{
			cin>>a[i];
			if(a[i]>=i)
			++flag;
		}
		if(flag==0)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	return 0;
}
