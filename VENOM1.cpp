#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,h,p,a;
	for(cin>>t;t--;)
	{
		cin>>h>>p>>a;
		int time=0,i=1;
		for(i=1;;++i)
		{
			if(h<=0)
			  break;
			else
			{
				++time;
				h-=i*p;
				if(h>0)
				{
					h+=a;
					++time;
				}
			}
		}
		cout<<time<<"\n";
	}
	return 0;
}
