#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define LL long long

int chiahet(int n){
	int cnt = 0;
	for(int i = 1; i <= sqrt(n); i++){
		if( n % i == 0 && i % 2 == 0)
		cnt++;
		if (n % (n/i) == 0 && (n/i) != i && (n/i) % 2 == 0)
		cnt++;
	}
	return cnt;
}

int main(){
	int m;
	scanf("%d", &m);
	while(m--){
		int n;
		scanf("%d", &n);
		printf("%d\n", chiahet(n));
	}
}
