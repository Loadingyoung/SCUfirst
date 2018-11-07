#include <stdio.h>
int main() {
	int n,i;
	scanf("%d",&n);//输入组数 
	int a,b,c,num[n];
	float average[n];
	for (i=0;i<n;i++) {
		scanf("%d%d%d%d",&num[i],&a,&b,&c);//分别输入学号和三科成绩 
		average[i]=(a+b+c)/3.0;//计算平均成绩，赋值给数组元素 
	}
	for (i=0;i<n;i++) {
		printf("%.2f\n",average[i]);
	}
	float max=average[0];
	for (i=1;i<n;i++) {
		if (average[i]>=max) {
			max=average[i];//比较大小，求出最大平均成绩 
		}
	}
	for (i=0;i<n;i++) {
		if (average[i]==max) {
			printf("%d %.2f\n",num[i],average[i]);//分别输出最大平均成绩的学号和平均成绩 
		}
	}
	return 0;
} 
