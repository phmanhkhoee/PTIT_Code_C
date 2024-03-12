#include <stdio.h>
#include <stdlib.h>
//2^k vd 2^3 = 2x2x2 => n giai thua se lay tung so chia cho 2 neu chia het thi se tinh la 1 so k, dan dan tang k len toi n nen => n>=k se chia het cho k
//vd n = 5 k = 3
//d = 2 => cnt +1 =1
//d = 3 => chay ra ngoai vong while => cnt 1 + 0 = 1
//d = 4 => cnt 1+1 = 2 va d/2 = 2 => cnt 2+1 = 3 => cnt = 3 va k = 3 => 5! chia het 2^3
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int cnt = 0;
    for (int i = 2; i <= n; i++)
    {
        int d = i;
        while (d % 2 == 0)
        {
            cnt++;
            d /= 2;
        }
    }
    if (cnt >= 	 k)
        printf("Yes");
    else
        printf("No");
    return 0;
}
