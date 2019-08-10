#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long int i,j,t,n,min,energy;
	cin>>t;
	for(j=1;j<=t;++j)
	{
		cin>>n;
		int a[n];
		for(i=0;i<n;++i)
		cin>>a[i];
		min=1;energy=1;
		for(i=0;i<n;++i)
		{
			energy+=a[i];
			if(energy==0)
			{
				min+=abs(a[i])+1;energy=1;
			}
			if(energy<0)
			{
				min+=abs(energy)+1;energy=1;
			}
		}
		cout<<"Scenario #"<<j<<": "<<min<<endl;		
	}
	return 0;
}
