#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int n,l,i,j,k;
	string str;
	while(true)
	{
		cin>>n;
		if(n==0)
			break;
		cin>>str;
		l=str.length();
		int row=l/n;char a[row][n];
		k=0;
		for(i=0;i<row;++i)
		{
			if(i%2==0)
				for(j=0;j<n;++j)
					a[i][j]=str[k++];
			else
				for(j=n-1;j>=0;--j)
					a[i][j]=str[k++];
		}
		for(i=0;i<n;++i)
		{
			for(j=0;j<row;++j)
				cout<<a[j][i];
		}
		cout<<"\n";
	}
	return 0;
}
