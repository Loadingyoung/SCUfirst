#include <stdio.h>
int age(int n,int a,int k) {
	if (n==1) {
		return a;
	} 
	return age(n-1,a,k)+k;
}
int main() {
	int n,a,k;
	scanf("%d%d%d",&n,&a,&k);
	if (n<2 || a==0 || k==0) {
		printf("Wrong Number\n");
	}
	else {
		printf("%d\n",age(n,a,k));
	} 
	return 0;
} 
