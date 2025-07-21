//Coding a BMI calculator
#include<stdio.h>
int main()
{
    int Weight;
    float Height;
    printf("Your Weight (in kilogram) :");
    scanf("%d",&Weight);
    printf("\n Your Height (in meters\t) :");
    scanf("%f",&Height);
    float BMI=Weight/(Height*Height);
    printf("Your BMI is \t\t :%f",BMI);
    printf("\nThis Program is Created by Tirth Darji_25TCEQWT\t");
    return 0;


}
