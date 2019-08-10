#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,i;
	long int n;
	cin>>t;
	for(i=1;i<=t;++i)
	{
		cin>>n;
		if(n%2==1)
			cout<<"Case "<<i<<": "<<n<<"\n";
		else
		{
			while(n)
			{
				if(n%2==0)
					n=n/2;
				else
					break;
			}
			cout<<"Case "<<i<<": "<<n<<"\n";
		}
	}
	return 0;
}
