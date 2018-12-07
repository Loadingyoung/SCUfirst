#include <stdio.h>
#define SIZE 200
int num(int n, int k);
int main(){
	int n,k,m,i;
	long result;
	scanf("%d",&m);
	for (i=0;i<m;i++) {
		scanf("%d%d",&n,&k);
		result = num(n,k);
		printf("%d\n",result);	
	} 
	return 0;
}
int num(int n, int k){
	long long a[SIZE][SIZE];
	int i,j;
	for (i=0;i<n+k-1;i++) {
			a[i][0]=a[i][i]=1;
	}
	for (i=2;i<n+k-1;i++) {
		for (j=1;j<i;j++) {
			a[i][j]=a[i-1][j-1]+a[i-1][j];	
		}
	}
	return a[n+k-2][k-1];
} 
