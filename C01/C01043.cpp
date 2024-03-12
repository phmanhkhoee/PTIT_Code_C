#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int Factorial(int n){
	int res = 1;
	for(int i = 1; i <= n; i++){
		res *= i;
	}
	return res;
} 

int strongNumber(int n){
	int sum = 0, temp = n;
	while(n){
		sum += Factorial(n % 10);
		n /= 10;
	}
	if (sum == temp) printf("1");
	else printf("0");
}

int main(){
	int n;
	scanf("%d", &n);
	strongNumber(n);
}
