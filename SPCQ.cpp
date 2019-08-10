#include<bits/stdc++.h>
using namespace std;
int digit(long long int num)
{
	long long int sum=0,temp=num;int d;
		while(temp!=0)
		{
			d=temp%10;
			sum=sum+d;
			temp=temp/10;
		}
		if(num%sum==0)
		return 1;
		return 0;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t;long long int n;
	for(cin>>t;t--;)
	{
		cin>>n;
		if(digit(n))
		cout<<n<<endl;
		else
			while(n++)
			  if(digit(n))
			  {
			    cout<<n<<endl;
		        break;
		      }
	}
	return 0;
}
