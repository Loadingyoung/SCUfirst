#include <stdio.h>
#include <string.h> 
struct Candidate {
	char name[10];
	int count;
};
int main() {
	int i,j;
	char y[10]={"END"},z[1000][1000];
	struct Candidate cand[4],x;
	cand[0].count=cand[1].count=cand[2].count=cand[3].count=0;
	for (i=0;i<3;i++) {
		scanf("%s",cand[i].name); 
	} 
	for (j=0;j<2;j++) {
		for (i=0;i<2;i++) {
			if (strcmp(cand[i].name,cand[i+1].name)>=0) {
				x=cand[i+1];
				cand[i+1]=cand[i];
				cand[i]=x;
			}
		}
	}
	for (i=0;i<1000;i++) {
		scanf("%s",z[i]);
		if (strcmp(z[i],y)==0) {
			break;
		}
	}
	for (i=0;i<1000;i++) {
		if (strcmp(z[i],cand[0].name)==0) {
			cand[0].count=cand[0].count+1;
		}
		else if (strcmp(z[i],cand[1].name)==0) {
			cand[1].count=cand[1].count+1;
		}
		else if (strcmp(z[i],cand[2].name)==0) {
			cand[2].count=cand[2].count+1;
		}
		else if (strcmp(z[i],y)==0) {
			break;
		}
		else {
			cand[3].count=cand[3].count+1;
		}
	}
	printf("%s:%d\n%s:%d\n%s:%d\nQQ:%d\n",cand[0].name,cand[0].count,cand[1].name,cand[1].count,cand[2].name,cand[2].count,cand[3].count);
	return 0;
}
