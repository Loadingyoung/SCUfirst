//���������ƽ���� 
#include <stdio.h> //Ԥ�������� 
int Func(int x,int y);//��������  ������ 
int main() //������ͷ 
{
	int a,b,c;
	printf("����������������"); 
	scanf("%d%d",&a,&b);
	c=Func(a,b);// ���ú���  ������ 
	printf("����������ƽ����=%d",c); 	
	return 0;//����������ֵ 
} 
//���庯��   ������  x,yΪ��ʽ����  a,bΪʵ�ʲ��� �β�ʵ��һһ��Ӧ 
int Func(int x,int y) {
	int z;
	z=x*x-y*y;
	return z;	
} 
//����д��ǰ��ʱ�������Ͷ���ϲ� 
