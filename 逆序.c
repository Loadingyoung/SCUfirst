#include <stdio.h>
int main() {
	int num,a,b,c;
	scanf("%d",&num);
	a=num/100;
	b=num/10%10;
	c=num%10;
	printf("%d\n",c*100+b*10+a);
	return 0;
}
