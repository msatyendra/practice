#include<stdio.h>
#include<stdio_ext.h>
int main() {
	int n,cnt=0;
	printf("Enter a number:");
	__fpurge(stdin);
	scanf("%d",&n);

	for(int i=1;i<=n;i++) {
		for(int j=0;j<i;j++) {
			if((j%2)==0) {
				printf("%2d ",((n-cnt)*j)+i-cnt);
				//printf(" * ");
				cnt++;
			} else {
				printf("%2d ",i);
			}
		}
		cnt=0;
		printf("\n");
	}
	printf("Even columns are not sorted.\n");
}
