#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;
    int count = 1;
    int i;
    scanf("%d",&num);
    for(i=num; i>0; i--)
        count *= i;
    printf("%d",count);
    return 0;
}
