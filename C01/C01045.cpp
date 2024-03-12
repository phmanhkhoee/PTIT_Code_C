#include <stdio.h>
#include <stdlib.h>

void daucuoi(int n){
	int last = n % 10;
	int first;
	while(n)
	{
		first = n % 10;
		n /= 10;
	}
	printf("%d %d", first, last);
}

int main(){
	int n;
	scanf("%d", &n);
	daucuoi(n);
}
