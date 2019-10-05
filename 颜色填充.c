#include <stdio.h>
#include <stdlib.h>
int nums[32][32];
void fbs(int,int);
  int n;
int main()
{
    int x,y;
    scanf("%d",&n);
    for(x=0; x<=n+1; x++)
    {
        for(y=0; y<=n+1; y++)
        {
            if(x == 0 || y == 0 || x == n+1 || y == n+1)
            {
                 nums[x][y] = 2;
                 continue;
            }

             scanf("%d",&nums[x][y]);
             if(nums[x][y] == 0)
             {
                 nums[x][y] = 2;
             }
        }
    }
   fbs(0,0);
   for(x=1; x<n+1; x++)
   {
        for(y=1; y<n+1; y++)
    {
         printf("%d ",nums[x][y]);
    }
        printf("\n");
   }

    return 0;
}
void fbs(int x,int y)
{
    if(x>=0 && x<=n+1 && y>=0 && y<=n+1)
        if(nums[x][y] == 1 || nums[x][y] == 0)
            return ;
        else
        {
            nums[x][y] = 0;
            fbs(x-1,y);
            fbs(x+1,y);
            fbs(x,y-1);
            fbs(x,y+1);
        }
}
