#include <stdio.h>
struct student{
	char name[21];
	int sno;
	double chinese;
	double english;
	double math;
	double sum;
};
int main() {
	int n,i,j;
	scanf("%d",&n);
	struct student stu[n],m;	
	for (i=0;i<n;i++) {
		scanf("%s %d %lf %lf %lf",stu[i].name,&stu[i].sno,&stu[i].chinese,&stu[i].english,&stu[i].math);
		stu[i].sum=stu[i].chinese+stu[i].english+stu[i].math;
	}
	for (i=0;i<n;i++) {
		for (j=i+1;j<n;j++) {
			if (stu[i].sum<stu[j].sum) {
				m=stu[i];
				stu[i]=stu[j];
				stu[j]=m;
			}
		}
	}
	for (i=0;i<n;i++) {
		printf("[name:%s,sum:%.0lf,sno:%d]\n",stu[i].name,stu[i].sum,stu[i].sno);
	}
	return 0;
} 
