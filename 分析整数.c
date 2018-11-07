#include<stdio.h>
int main() {
	int num,i=0;
	int a,b,c,d,e;
	scanf("%d",&num);
	a=num%10;
	b=num/10%10;
	c=num/100%10;
	d=num/1000%10;
	e=num/10000;
	while (1) {
		num=num/10;
		i++;
		if (num==0) {
			break;
		}
	} 
	printf("%d\n",i);
	if (i==1) {
		printf("%d \n",a);
		printf("%d ",a);
	}
	if (i==2) {
		printf("%d %d \n",b,a);
		printf("%d %d ",a,b);
	}
	if (i==3) {
		printf("%d %d %d \n",c,b,a);
		printf("%d %d %d ",a,b,c);
	}
	if (i==4) {
		printf("%d %d %d %d \n",d,c,b,a);
		printf("%d %d %d %d ",a,b,c,d);
	}
	if (i==5) {
		printf("%d %d %d %d %d \n",e,d,c,b,a);
		printf("%d %d %d %d %d ",a,b,c,d,e);
	} 
	return 0;
}
