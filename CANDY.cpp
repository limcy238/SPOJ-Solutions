#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n,i;
	while(true)
	{
		cin>>n;
		if(n==-1)
			return 0;
		double a[n],sum=0;
		for(i=0;i<n;++i)
		{
			cin>>a[i];
			sum+=a[i];
		}
		double avg=sum/n;
		sum=0;
		if((avg-floor(avg))==0)
		{
			for(i=0;i<n;++i)
				if(a[i]>avg)
					sum+=(a[i]-avg);
			cout<<sum<<"\n";
		}
	
		else
		{
				cout<<"-1"<<"\n";
		}
	}
	return 0;
}
