#include <stdio.h>
#include <math.h>
int main() {
	double a , b , c;
	double s , area;
	while(1) {
		printf("�����������ε����߳�a,b,c\n");
		scanf("%lf%lf%lf",&a,&b,&c);
		if(a+b<=c||b+c<=a||a+c<=b||a*b*c==0) {
			printf("������������߲��ܹ���������!\n");
		} 
		else {
		break;	
		}
	} 
	s = (a + b + c)/2.0;
	area = sqrt(s*(s-a)*(s-b)*(s-c));
	printf("�����ε����Ϊ��%.2f\n",area);
	return 0;
} 
