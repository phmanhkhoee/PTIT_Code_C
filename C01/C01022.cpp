#include <stdio.h>
#include <stdlib.h>
int main() {
  int test;
  scanf("%d",&test);
  while(test--){
    int n;
    int sum = 0;
    scanf("%d",&n);
     while (n) {
        sum += n % 10;
        n /= 10;
  }
    printf("%d\n",sum);
  }
  return 0;
}
