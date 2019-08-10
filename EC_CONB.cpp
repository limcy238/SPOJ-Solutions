#include<bits/stdc++.h>
using namespace std;
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	int t,n;
	for(cin>>t;t--;)
	{
		cin>>n;
		if(n%2==1)
		    cout<<n<<endl;
	    else
	    {
	        string binary = bitset<32>(n).to_string();
	        int i,l=binary.length(),num=0;
	        size_t found = binary.find_first_of("1");
	        int p=0;
	        for(i=found;i<l;++i)
	        {
	            num+=(int)(binary[i]-48)*(int)pow(2,p++);
	        }
	        cout<<num<<endl;
	    }
	}
	return 0;
}
