#include<stdio.h>
 
long long count,m,n,space[100][100];
void lot(int i,int j){
	if((i==m-1&&j==n-1)||(i==m-1&&space[i][j+1]==2147483647)||(j==n-1&&space[i+1][j]==2147483647)||((space[i][j+1]==2147483647)&&space[i+1][j]==2147483647));
	else{
		count++;
		if(i==m-1||space[i+1][j]==2147483647){
			lot(i,j+1);
		}
		else if(j==n-1||space[i][j+1]==2147483647){
			lot(i+1,j);
		}
		else if(space[i][j+1]<space[i+1][j]){
			lot(i,j+1);
		}
		else{
			lot(i+1,j);
		}
	}
}
	
	
int main(){
	long long inputs,i,j;
	scanf("%lld",&inputs);
	while(inputs){
		scanf("%lld",&m);
		scanf("%lld",&n);
		for(i=0;i<m;i++){
			for(j=0;j<n;j++){
				scanf("%lld",&space[i][j]);
			}
		}
		count=0;
		lot(0,0);
		printf("%lld\n",count);
		inputs--;
	}
	return 0;
}	