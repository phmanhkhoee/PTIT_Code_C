#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int CountDigits(int n){
	int cnt = 0;
	while(n > 0){
		n /= 10;
		cnt++;
	}
	printf("%d", cnt);
}
int main(){
	int n;
	scanf("%d", &n);
	CountDigits(n);
}
