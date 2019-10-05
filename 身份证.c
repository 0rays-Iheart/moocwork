#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int panduan(int);
int main()
{
    int nums[8];
    int year,month,date;
    srand(time(NULL));
    year = rand()%2019 + 1;
    printf("%d",year);
    month = rand()%12 + 1;
    if(panduan(year)  &&  month == 2)
        date = rand()%29 + 1;
    else
        date = rand()%28 + 1;
    printf("您的身份证号码为：123456%04d%02d%02d1234",year,month,date);
    return 0;
}
int panduan(int n)
{
if(n%100==0)
    if(n%400==0)
       return 1;
    else
        return 0;
else if(n%4==0)
    return 1;
else
    return 0;
}
