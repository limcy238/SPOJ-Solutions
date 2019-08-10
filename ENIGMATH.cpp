#include<bits/stdc++.h>
using namespace std;
int gcd(int n1, int n2)
{
    if (n2 != 0)
       return gcd(n2, n1%n2);
    else 
       return n1;
}
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long int t,a,b;
	for(cin>>t;t--;)
	{
	
		cin>>a>>b;
		long int g=gcd(a,b);
		cout<<b/g<<" "<<a/g<<"\n";	
	}
	return 0;
}
