#include <stdio.h>
int main() {
	int bjt,utc;
	scanf("%d",&bjt);
	if (bjt<800) {
		utc=bjt-800+2400;
	}
	else {
		utc=bjt-800;
	}
	printf("%d",utc);
	return 0;
}
