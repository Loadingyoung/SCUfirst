#include <stdio.h>
#include <math.h>
int main() {
	double a , b , c;
	double s , area;
	while(1) {
		printf("请输入三角形的三边长a,b,c\n");
		scanf("%lf%lf%lf",&a,&b,&c);
		if(a+b<=c||b+c<=a||a+c<=b||a*b*c==0) {
			printf("你输入的三条边不能构成三角形!\n");
		} 
		else {
		break;	
		}
	} 
	s = (a + b + c)/2.0;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("三角形的面积为：%.2f\n",area);
	return 0;
} 
