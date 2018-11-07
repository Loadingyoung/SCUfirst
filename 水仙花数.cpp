#include <stdio.h>
int main() {
	int num=100;
	while(num<=999) {
		int x=num/100;
		int y=num/10%10;
		int z=num%10;
		int sum=x*x*x+y*y*y+z*z*z;
		if(sum==num)
		printf("%d是水仙花数！\n",num);
		num += 1;
	}
	return 0;
} 
