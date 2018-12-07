#include <stdio.h>
#include <stdlib.h>
int main() {
	system("color B0") ;
	int week,day,T;
	char *r[11]={"(必)管理学","(必)经济数学","(必)政治经济学",
	"计算机实验","计算机文化基础","军事理论","形势与政策",
	"英语","体育","大学生心理健康","思想道德修养与法律基础"};
	char *p[12]={"08:00-08:40","08:50-09:30","09:45-10:25",
	"10:35-11:15","11:25-12:05","14:30-15:10","15:20-16:00",
	"16:10-16:50","17:00-17:40","19:00-19:40","19:50-20:30",
	"20:40-21:20"};
	char *q[10]={"主教105","电教室","二教109","二教204","图书馆3",
	"老区机房2楼","主教609","主教205","主教209","运动场"}; 
	printf("*_*周雨专属的课表查询器*_*\n");
	printf("(提示:全天-0,上午-1,下午-2,晚上-3.)\n");
	printf("请输入你要查询的周次_星期_时段：");
	scanf("%d%d%d",&week,&day,&T);
	if (week>=1&&week<=18) {
		if (day==1) {
			if (T==0) {
				printf("上午:");
				if (week>=6&&week<=17) {
					printf("\tTime:%s & %s\n",p[2],p[3]);
					printf("\tPlace:%s\n",q[0]);
					printf("\tCourse:%s\n",r[10]);
				}
				else {
					printf("\tNo courses!\n");
				}
				printf("下午:");
				if (week>=11&&week<=13) {
					printf("\tTime:%s & %s\n",p[5],p[6]);
					printf("\tPlace:%s\n",q[1]);
					printf("\tCourse:%s\n",r[9]);
					printf("\tTime:%s & %s\n",p[7],p[8]);
					printf("\tPlace:%s\n",q[2]);
					printf("\tCourse:%s\n",r[4]);
				}
				else if (week>=6&&week<11) {
					printf("\tTime:%s & %s\n",p[7],p[8]);
					printf("\tPlace:%s\n",q[2]);
					printf("\tCourse:%s\n",r[4]);
				}
				else if (week>13&&week<=16) {
					printf("\tTime:%s & %s\n",p[5],p[6]);
					printf("\tPlace:%s\n",q[1]);
					printf("\tCourse:%s\n",r[9]);
				}
				else {
					printf("\tNo courses!\n");
				}
				printf("晚上:");
				printf("\tTime:%s & %s\n",p[9],p[10]);
				printf("\tPlace:%s\n",q[3]);
				printf("\tCourse:%s\n",r[2]);
			}
			if (T==1) {
				if (week>=6&&week<=17) {
					printf("Time:%s & %s\n",p[2],p[3]);
					printf("Place:%s\n",q[0]);
					printf("Course:%s\n",r[10]);
				}
				else {
					printf("No courses!\n");
				}
			}
			if (T==2) {
				if (week>=11&&week<=13) {
					printf("Time:%s & %s\n",p[5],p[6]);
					printf("Place:%s\n",q[1]);
					printf("Course:%s\n",r[9]);
					printf("Time:%s & %s\n",p[7],p[8]);
					printf("Place:%s\n",q[2]);
					printf("Course:%s\n",r[4]);
				}
				else if (week>=6&&week<11) {
					printf("Time:%s & %s\n",p[7],p[8]);
					printf("Place:%s\n",q[2]);
					printf("Course:%s\n",r[4]);
				}
				else if (week>13&&week<=16) {
					printf("Time:%s & %s\n",p[5],p[6]);
					printf("Place:%s\n",q[1]);
					printf("Course:%s\n",r[9]);
				}
				else {
					printf("No courses!\n");
				}
			}
			if (T==3) {
				printf("Time:%s & %s\n",p[9],p[10]);
				printf("Place:%s\n",q[3]);
				printf("Course:%s\n",r[2]);
			}
			if (T>=4||T<0) {
				printf("Error\n");
			}
		} 
		if (day==2) {
			if (T==0) {
				printf("上午:");
				printf("\tTime:%s & %s\n",p[0],p[1]);
				printf("\tPlace:%s\n",q[8]);
				printf("\tCourse:%s\n",r[7]);
				printf("下午:");
				printf("\tNo courses!\n");
				printf("晚上:");
				printf("\tTime:%s & %s & %s\n",p[9],p[10],p[11]);
				printf("\tPlace:%s\n",q[4]);
				printf("\tCourse:%s\n",r[0]);
			}
			if (T==1) {
				printf("Time:%s & %s\n",p[0],p[1]);
				printf("Place:%s\n",q[8]);
				printf("Course:%s\n",r[7]);
			}
			if (T==2) {
				printf("No courses!\n");
			}
			if (T==3) {
				printf("Time:%s & %s & %s\n",p[9],p[10],p[11]);
				printf("Place:%s\n",q[4]);
				printf("Course:%s\n",r[0]);
			}
			if (T>=4||T<0) {
				printf("Error\n");
			}
		}
		if (day==3) {
			if (T==0) {
				printf("上午:");
				if (week>=6&&week<=11) {
					printf("\tTime:%s & %s\n",p[0],p[1]);
					printf("\tPlace:%s\n",q[3]);
					printf("\tCourse:%s\n",r[1]);
					printf("\tTime:%s & %s\n",p[2],p[3]);
					printf("\tPlace:%s\n",q[5]);
					printf("\tCourse:%s\n",r[3]);
				}
				else {
					printf("\tTime:%s & %s\n",p[0],p[1]);
					printf("\tPlace:%s\n",q[3]);
					printf("\tCourse:%s\n",r[1]);
				}
				printf("下午:");
				printf("\tTime:%s & %s\n",p[7],p[8]);
				printf("\tPlace:%s\n",q[8]);
				printf("\tCourse:%s\n",r[7]);
				printf("晚上:");
				printf("\tNo courses!\n");
			}
			if (T==1) {
				if (week>=6&&week<=11) {
					printf("Time:%s & %s\n",p[0],p[1]);
					printf("Place:%s\n",q[3]);
					printf("Course:%s\n",r[1]);
					printf("Time:%s & %s\n",p[2],p[3]);
					printf("Place:%s\n",q[5]);
					printf("Course:%s\n",r[3]);
				}
				else {
					printf("Time:%s & %s\n",p[0],p[1]);
					printf("Place:%s\n",q[3]);
					printf("Course:%s\n",r[1]);
				}
			}
			if (T==2) {
				printf("Time:%s & %s\n",p[7],p[8]);
				printf("Place:%s\n",q[8]);
				printf("Course:%s\n",r[7]);
			}
			if (T==3) {
				printf("No courses!\n");
			}
			if (T>=4||T<0) {
				printf("Error\n");
			}
		}
		if (day==4) {
			if (T==0) {
				printf("上午:");
				if (week>=6&&week<=17) {
					printf("\tTime:%s & %s\n",p[0],p[1]);
					printf("\tPlace:%s\n",q[4]);
					printf("\tCourse:%s\n",r[0]);
					printf("\tTime:%s & %s\n",p[2],p[3]);
					printf("\tPlace:%s\n",q[0]);
					printf("\tCourse:%s\n",r[10]);
				}
				else {
					printf("\tTime:%s & %s\n",p[0],p[1]);
					printf("\tPlace:%s\n",q[4]);
					printf("\tCourse:%s\n",r[0]);
				}
				printf("下午:");
				if (week>=6&&week<=13) {
					printf("\tTime:%s & %s\n",p[5],p[6]);
					printf("\tPlace:%s\n",q[2]);
					printf("\tCourse:%s\n",r[5]);
					printf("\tTime:%s & %s\n",p[7],p[8]);
					printf("\tPlace:%s\n",q[9]);
					printf("\tCourse:%s\n",r[8]);
				}
				else {
					printf("\tTime:%s & %s\n",p[7],p[8]);
					printf("\tPlace:%s\n",q[9]);
					printf("\tCourse:%s\n",r[8]);
				}
				printf("晚上:");
				printf("\tTime:%s & %s & %s\n",p[9],p[10],p[11]);
				printf("\tPlace:%s\n",q[7]);
				printf("\tCourse:%s\n",r[1]);
			}
			if (T==1) {
				if (week>=6&&week<=17) {
					printf("Time:%s & %s\n",p[0],p[1]);
					printf("Place:%s\n",q[4]);
					printf("Course:%s\n",r[0]);
					printf("Time:%s & %s\n",p[2],p[3]);
					printf("Place:%s\n",q[0]);
					printf("Course:%s\n",r[10]);
				}
				else {
					printf("Time:%s & %s\n",p[0],p[1]);
					printf("Place:%s\n",q[4]);
					printf("Course:%s\n",r[0]);
				}
			}
			if (T==2) {
				if (week>=6&&week<=13) {
					printf("Time:%s & %s\n",p[5],p[6]);
					printf("Place:%s\n",q[2]);
					printf("Course:%s\n",r[5]);
					printf("Time:%s & %s\n",p[7],p[8]);
					printf("Place:%s\n",q[10]);
					printf("Course:%s\n",r[8]);
				}
				else {
					printf("Time:%s & %s\n",p[7],p[8]);
					printf("Place:%s\n",q[10]);
					printf("Course:%s\n",r[8]);
				}
			}
			if (T==3) {
				printf("Time:%s & %s & %s\n",p[9],p[10],p[11]);
				printf("Place:%s\n",q[7]);
				printf("Course:%s\n",r[1]);
			}
			if (T>=4||T<0) {
				printf("Error\n");
			}
		}
		if (day==5) {
			if (T==0) {
				printf("上午:");
				printf("\tTime:%s & %s & %s\n",p[2],p[3],p[4]);
				printf("\tPlace:%s\n",q[3]);
				printf("\tCourse:%s\n",r[2]);
				printf("下午:");
				if (week>=9&&week<=12) {
					printf("\tTime:%s & %s\n",p[7],p[8]);
					printf("\tPlace:%s\n",q[1]);
					printf("\tCourse:%s\n",r[6]);
				}
				else {
					printf("\tNo courses!\n");
				}
				printf("晚上:");
				printf("\tNo courses!\n");
			}
			if (T==1) {
				printf("Time:%s & %s & %s\n",p[2],p[3],p[4]);
				printf("Place:%s\n",q[3]);
				printf("Course:%s\n",r[2]);
			}
			if (T==2) {
				if (week>=9&&week<=12) {
					printf("Time:%s & %s\n",p[7],p[8]);
					printf("Place:%s\n",q[1]);
					printf("Course:%s\n",r[6]);
				}
				else {
					printf("No courses!\n");
				}
			}
			if (T==3) {
				printf("No courses!\n");
			}
			if (T>=4||T<0) {
				printf("Error\n");
			}
		}
		if (day>=6&&day<=7) {
			printf("周末啦!\n"); 
		}
		if (day<=0||day>=8) {
			printf("Error\n"); 
		} 
	}
	else {
		printf("Error\n"); 
	}
	printf("查询完毕!\n请按Enter键退出...");
	system("pause>nul");
	return 0;
} 
