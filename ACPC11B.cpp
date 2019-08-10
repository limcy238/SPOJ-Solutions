#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,i,m,n,x,y;
	for(cin>>t;t--;)
	{
		cin>>m;
		int a[m];
		for(i=0;i<m;i++)
			cin>>a[i];
		cin>>n;
		int b[n];
		for(i=0;i<n;i++)
			cin>>b[i];
		sort(a,a+m);
		sort(b,b+n);
		x=0;y=0;
		int result=1000000;
		while(x<m and y<n)
		{
			if(abs(a[x]-b[y])<result)
				result=abs(a[x]-b[y]);
			if(a[x]<b[y])
				x++;
			else
				y++;
		}
		cout<<result<<"\n";
	}
	return 0;
}
