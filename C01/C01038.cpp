#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    scanf("%d", &n);
    int first = n % 10;
    int last = n % 10;
    int temp = n;
    n /= 10;
    int cnt = 1;
    while (n > 0){
        cnt *= 10;
        first = n % 10;	
        n /= 10;
    }
	int res = last * cnt + temp % cnt - last + first;
    printf("%d", res);
    return 0;
}
