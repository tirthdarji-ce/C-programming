#include<stdio.h>
int main()
{
    int seconds;
    printf("enter the number of second - ");
    scanf("%d",&seconds);
    if(seconds>=0)
    {
        while(seconds>0)
        {
            printf("%d\n\a",seconds);
            sleep(1);
            seconds --;
        }
    }
    else
    {
        printf("enter a vaild non zero number");
    }
printf("\acountdown completed");
return 0;
}
