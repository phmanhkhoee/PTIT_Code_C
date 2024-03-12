#include <stdio.h>
#include <stdlib.h>
void solve(int n){
	int odd = 0, even = 0;
	while(n){
		int so = n % 10;
		if(so%2==1) ++odd;
		else ++even;
		n /=10 ;
	}
	printf("%d %d\n", odd, even);
}
int main(){
	int m;
	scanf("%d", &m);
	while(m--){
		int n;
		scanf("%d", &n);
		solve(n);	
	}
  return 0;
}
