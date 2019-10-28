#include <stdio.h>
 
int main()
{
    int i,n;
    int t = 1;
 
    printf("nhap n:\n");
    scanf("%d", &n);
 
    for(i = 1; i <= n; i++) 
    {
        t = t * i;
    }
 
    printf("%d! = %d\n", n, t);
 
    return 0;
}
