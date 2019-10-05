#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int nums[1000000];
    int i;
    srand(time(NULL));
    for(i=0; i<1000000; i++)
    {
        nums[i] = rand()%201;
        if(nums[i] > 100)
              printf("%d ",nums[i]);
    }

    return 0;
}
