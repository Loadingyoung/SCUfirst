//����������λ�� 
#include <stdio.h>
int main() {
	double a,b,t; 
	printf("������������ͬ����:");
	scanf("%lf%lf",&a,&b);
	t=a;
	a=b;
	b=t;
	printf("�������������ʾΪ��%lf %lf",a,b);
	return 0;
} 
