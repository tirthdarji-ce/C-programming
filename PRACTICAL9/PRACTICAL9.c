#include<stdio.h>
void main()
{
  float se,t,e;
  printf("enter your shopping amount:");
  scanf("%f",&se);
  if(se>=5000){
    t=(se*20)/100;
    e=se-t;
    printf("your totle amount is:%.2f",e);
  }

  else if(1000<se<5000){t=(se*10)/100; e=se-t;
  printf("your totle amount is:%.2f",e);}
  else{printf("no discount");}
  printf("\nthis program is done by Tirth Darji,25TCEQWT");
  }
