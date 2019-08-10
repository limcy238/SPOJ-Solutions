#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	string s;
	while(cin>>s)
	{
	int l=s.length();
    if(l==1)
    cout<<0<<endl;
    else
    {
    	int n1=0,n2=0,n11=0,n22=0,sum=0,i;
    	for(i=0;i<l;i+=2)
    	{
    		if(s[i]>='A' and s[i]<='Z')
    	    	++n1;
    		else if(s[i]>='a' and s[i]<='z')
    	    	++n2;
    	}
    	for(i=1;i<l;i+=2)
    	{
    		if(s[i]>='A' and s[i]<='Z')
    	    	++n11;
    		else if(s[i]>='a' and s[i]<='z')
    	    	++n22;
    	}
      	if((n1+n22)<=(n2+n11))
	            sum=n1+n22;
	   	    else
			    sum=n2+n11;
	    cout<<sum<<endl;
	}
    }
	return 0;
}
			    
    		
