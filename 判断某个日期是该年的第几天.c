#include <stdio.h>
int main() {
	int m,n,i,year,month,day,sum,x,y,z;
	scanf("%d",&n);
	for (i=0;i<n;i+=1) {
		sum=0; 
		scanf("%d%d%d",&year,&month,&day);
		x=year%4;y=year%100;z=year%400;
		if (x!=0) {
			int num[12]={31,28,31,30,31,30,31,31,30,31,30,31};
			for (m=0;m<(month-1);m+=1) {
				sum=sum+num[m];
			}
			sum=sum+day;
		} 
		else if (x==0&&y!=0){
			int num[12]={31,29,31,30,31,30,31,31,30,31,30,31};
			for (m=0;m<(month-1);m+=1) {
				sum=sum+num[m];
			}
			sum=sum+day;
		}
		else if (z==0){
			int num[12]={31,29,31,30,31,30,31,31,30,31,30,31};
			for (m=0;m<(month-1);m+=1) {
				sum=sum+num[m];
			}
			sum=sum+day;
		}
		printf("%d\n",sum);
	}
	return 0;
}
