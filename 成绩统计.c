#include <stdio.h>
int main() {
	int n,i;
	scanf("%d",&n);//�������� 
	int a,b,c,num[n];
	float average[n];
	for (i=0;i<n;i++) {
		scanf("%d%d%d%d",&num[i],&a,&b,&c);//�ֱ�����ѧ�ź����Ƴɼ� 
		average[i]=(a+b+c)/3.0;//����ƽ���ɼ�����ֵ������Ԫ�� 
	}
	for (i=0;i<n;i++) {
		printf("%.2f\n",average[i]);
	}
	float max=average[0];
	for (i=1;i<n;i++) {
		if (average[i]>=max) {
			max=average[i];//�Ƚϴ�С��������ƽ���ɼ� 
		}
	}
	for (i=0;i<n;i++) {
		if (average[i]==max) {
			printf("%d %.2f\n",num[i],average[i]);//�ֱ�������ƽ���ɼ���ѧ�ź�ƽ���ɼ� 
		}
	}
	return 0;
} 
