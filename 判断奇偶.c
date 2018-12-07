#include <stdio.h>
int main() {
	int num,i=0,j=0;
	scanf("%d",&num); 
	while (num>-1) {
		switch (num%2) {
			case 1:
				i++;
				break;
			case 0:
				j++;
				break;
		}
		scanf("%d",&num);	
	}
	printf("%d %d",i,j);
	return 0;
}
