#include <stdio.h>
int main() {
	int m,n,i,j,k,l;
	scanf("%d%d",&m,&n);
	int a[m],b[n],c[m+n],x;
	for (i=0;i<m;i++) {
		scanf("%d",&a[i]);
	}
	for (i=0;i<n;i++) {
		scanf("%d",&b[i]);
	}
	i=j=k=0;
	if (a[0]<a[m-1]) {
		while (i<m&&j<n) {
			if (a[i]<b[j]) {
			c[k]=a[i];
			i++;
			}
			else {
			c[k]=b[j];
			j++;
			}
			k++;
		}
		if (i<m) {
			for (l=i;l<m;l++) {
				c[k]=a[l];
				k++;
			}
		}
		if (j<n) {
			for (l=j;l<n;l++) {
				c[k]=b[l];
				k++;
			}
		}
	}
	else {
		while (i<m&&j<n) {
			if (a[i]>b[j]) {
				c[k]=a[i];
				i++;
			}
			else {
				c[k]=b[j];
				j++;
			}
			k++;
		}
		if (i<m) {
			for (l=i;l<m;l++) {
				c[k]=a[l];
				k++;
			}
		}
		if (j<n) {
			for (l=j;l<n;l++) {
				c[k]=b[l];
				k++;
			}
		}
	}
	for (i=0;i<m+n;i++) {
		printf("%d",c[i]);
		if (i<m+n) {
			printf(" ");
		}
	}
	return 0;
} 
