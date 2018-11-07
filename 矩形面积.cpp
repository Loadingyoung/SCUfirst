//求矩形的面积
#include <stdio.h>
int main() {
	double lng,wid,area;
	printf("请分别输入矩形的长和宽：");
	scanf("%lf%lf",&lng,&wid);
	area=lng*wid;
	printf("这个矩形的面积为:%.2lf",area);
	return 0; 
} 
