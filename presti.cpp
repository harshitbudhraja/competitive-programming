#include<iostream>
#include<cstdio>
using namespace std;
int nd=0,i=0;

long long rec(int n)
{
	long long tmp;
	if(n<=1) return 0;
	if(n<=2) return 1;
	tmp=(n-1)*(rec(n-1)+rec(n-2));
	return tmp;
}


int main()
{
	
	scanf("%d",&nd);
	long long nc[nd];
	while(i<nd)
	{
		scanf("%d",&nc[i]);
		i++;
	}
	for(i=0;i<nd;i++)
	{
		printf("%lld\n",rec(nc[i]));
	}

	return 0;
}