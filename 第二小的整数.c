#include <stdio.h>
int main() {
	int m,n;
	scanf("%d",&m); 
	int num[m];
	for (n=0;n<m;n++) {
		int a,b;
		scanf("%d",&a);
		int number[a],min2[m];
		for (b=0;b<a;b++) {
			scanf("%d",&number[b]);
		}
		if (a>=2) {
			int min=number[0],secmin=number[1];
			if (number[0]<number[1]) {
				min=number[0];
				secmin=number[1];
			}
			else {
				min=number[1];
				secmin=number[0];
			}
			for (b=2;b<a;b++) {
				if(min!=secmin) {
					if (number[b]<=min) {
						secmin=min;
						min=number[b];
					}
					if (number[b]>min&&number[b]<=secmin) {
						secmin=number[b];
					}
				}
				else {
						if (number[b]<=min) {
							min=number[b];
						}
						if (number[b]>=secmin) {
							secmin=number[b];
						}	
				}
			}
			if (secmin==min) {
				printf("ERROR\n");
			}
			else {
			printf("%d\n",secmin);
			}
		}
		else {
			printf("ERROR\n");
		}
	}
	return 0;
}
