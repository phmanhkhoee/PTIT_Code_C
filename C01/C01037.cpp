#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int sumDigits(int a, int b){
	int sum = 0;
	if(b > a){
		for(int i = a; i <= b; i++){
			sum += i;
		}
	}
	else if(a > b){
		for(int i = b; i <= a; i++){
			sum += i;
		}
	}
	printf("%d", sum);
}
int main(){
	int a, b;
	scanf("%d %d", &a, &b);
	sumDigits(a,b);
}
