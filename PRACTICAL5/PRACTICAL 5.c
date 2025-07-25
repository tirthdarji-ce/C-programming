//calculating the number of man and women who are illiterate
#include<stdio.h>
int main()
{
    long long Man=(51.6/100)*1441981744;
    long long Women=(48.4/100)*1441981744;
    long long illiterateperson=(14.04/100)*(Man+Women);
    long long illiterateMan=(19.05/100)*illiterateperson;
    long long illiterateWomen=(37.16/100)*illiterateperson;
    printf("Number Of illitrate Man  :%lld",illiterateMan);
    printf("\nNumber Of illitrate Women:%lld",illiterateWomen);
    printf("\nThis is made by \t :Tirth Darji(25TCEQET)");
    return 0;
}

