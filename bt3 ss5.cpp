#include <stdio.h>

int main() {
    int n;
    int sum;
    printf("nhap n ");
    scanf("%d",&n);
    for(int i=1 ; i<=n ; i++){
    	sum+=i;
	}
	printf("tong la %d",sum);
	return 0;
}