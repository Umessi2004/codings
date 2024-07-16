#include<stdio.h>
int main(int argc, char *argv[])
{
	int m,n;
	int hcf;
	printf("enter the value of m,n:");
	scanf("%d %d", &m, &n);
	for (int i=1;i<=m+1;i++){
		if (m%i==0 && n%i==0){
			 hcf=i;
		}
		
	}
	printf("%d",hcf);
	return 0;
}