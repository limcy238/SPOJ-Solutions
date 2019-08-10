#include<bits/stdc++.h>
using namespace std;
int reverse(int n)
{
	int rem,rev=0;
	while(n)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	return rev;
}
int main()
{
	int N,i=1,n1,n2,sum,r;
	scanf("%d",&N);
	while(i<=N)
	{
		scanf("%d%d",&n1,&n2);
		sum=0;
		r=reverse(n1);
		sum+=r;
		r=reverse(n2);
		sum+=r;
		printf("%d\n",reverse(sum));
     	i++;
	}
	return 0;
}

		
		

	
	
	
		
		
	
