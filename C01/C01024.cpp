#include <stdio.h>
#include <stdlib.h>

int main() {
  int test;
  scanf("%d", &test);
	while(test--){
  		 int n;
  		scanf("%d", &n);
		int last = n % 10;
		n /= 10;
		int first;
		while(n){
			first = n % 10;
			n /= 10;
		}
		if(first == last) printf("YES\n");
		else printf ("NO\n");
	}
  return 0;
}
