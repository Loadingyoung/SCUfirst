//求解两数的平方差 
#include <stdio.h> //预处理命令 
int Func(int x,int y);//声明函数  有类型 
int main() //主函数头 
{
	int a,b,c;
	printf("请输入两个整数："); 
	scanf("%d%d",&a,&b);
	c=Func(a,b);// 调用函数  无类型 
	printf("这两个数的平方差=%d",c); 	
	return 0;//主函数返回值 
} 
//定义函数   有类型  x,y为形式参数  a,b为实际参数 形参实参一一对应 
int Func(int x,int y) {
	int z;
	z=x*x-y*y;
	return z;	
} 
//定义写在前面时，声明和定义合并 
