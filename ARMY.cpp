#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t,a[1000000],b[1000000],ng,nm;
	scanf("%d",&t);
	printf("\n");
	while(t--)
	{
		scanf("%d%d",&ng,&nm);
		int i=0;
		scanf("%d",&a[0]);int max1=a[0];
		for(i=1;i<ng;++i)
		{
			scanf("%d",&a[i]);
			if(a[i]>max1)
			max1=a[i];
		}
		scanf("%d",&b[0]);int max2=b[0];
		for(i=1;i<nm;++i)
		{
			scanf("%d",&b[i]);
			if(b[i]>max2)
			max2=b[i];
		}
		if((max1>max2)or(max1==max2))
		printf("Godzilla\n");
		else if(max1<max2)
		printf("MechaGodzilla\n");
		else
		printf("uncertain\n");
	}
	return 0;
}

