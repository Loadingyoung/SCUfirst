//交换两数的位置 
#include <stdio.h>
int main() {
	double a,b,t; 
	printf("请输入两个不同的数:");
	scanf("%lf%lf",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("交换两个数后表示为：%lf %lf",a,b);
	return 0;
} 
