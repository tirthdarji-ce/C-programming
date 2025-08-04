#include<stdio.h>
void main()
{
    int age;
    const int price=500;
    printf("enter your age:");
    scanf("%d",&age);


    if(age<10){
    printf("you are eligible for free entry");
}
else
{
    printf("you are adult so you are required to purchase ticket");
    int npeople,totalprice;
    printf("\nenter the number of adult people:");
    scanf("%d",&npeople);
    totalprice=price*npeople;
    printf("total amount : %d",totalprice);

}
printf("\nthis program is done by Tirth Darji, 25TCEQWT");
}
