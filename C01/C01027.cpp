#include <stdio.h>
#include <stdlib.h>

int GCD(int a, int b){
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
		int a,b;
		scanf("%d %d", &a, &b);
		printf("%d\n", GCD(a,b));
	}
}
