#include <stdio.h>
#include <stdlib.h>
#define LL long long

LL GCD(LL a, LL b){
	if(a == 0 || b == 0)	return a + b;
	while(a != b ){
		if (a > b)
			a = a - b;
		else 
			b = b - a;
	}
	return a;
}

int main(){
	int n;
	scanf("%d", &n);
	while(n--){
		LL a,b;
		scanf("%lld %lld", &a, &b);
		printf("%lld %lld\n", (a*b)/GCD(a,b), GCD(a,b));
	}
}
