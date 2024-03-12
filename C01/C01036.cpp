#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int productDigits(int n){
	int prd = 1;
	int temp;
	while(n > 0){
		temp = n % 10;
		prd *= temp;
		n /= 10;
	}
	printf("%d", prd);
}
int main(){
	int n;
	scanf("%d", &n);
	productDigits(n);
}
