// Program to understand the size of the data type
#include<limits.h>
#include<float.h>
void main()
{
    printf("The size of intiger data type is: %zu", sizeof(char));
    printf("\nThe range of character data type is: %D to %d",CHAR_MIN,CHAR_MAX);
    printf("\nThe size of unsigned character is : %zu", sizeof(unsigned int));
    printf("\nThe range of unsigned intiger is : 0 to %u",UINT_MAX);
    printf("\nThe size of integer data type is : %zu",sizeof(int));
    printf("\nThe range of integer data type is: %d to %d", INT_MIN,INT_MAX);
    printf("\nThe size of long data type is : %zu",sizeof(long));
    printf("\nThe range of integer data type is: %d to %d", LONG_MIN,LONG_MAX);
    printf("\nThe size of unsigned long data type is : %zu",sizeof(unsigned long));
    printf("\nThe range of unsigned data type is: 0 to %lu", ULONG_MAX);
    printf("\nThe size of long long data type is : %zu",sizeof(long long));
    printf("\nThe range of long long data type is: %lld to %lld", LLONG_MIN,LLONG_MAX);
    printf("\nThe size of unsigned long long data type is : %zu",sizeof(unsigned long long));
    printf("\nThe range of unsigned long long data type is: 0 to %d",ULLONG_MAX);
    printf("\nThe size of float data type is : %zu",sizeof(float));
    printf("\nThe range of float data type is: %e to %e",FLT_MIN,FLT_MAX);
    printf("\nThe size of long double data type is : %zu",sizeof(long double));
    printf("\nThe range of long double data type is: %d to %d", LDBL_MIN,LDBL_MAX);
    printf("\nThe Program is made by : TIRTH DARJI_(25TCEQWT)");
    return 0;
}



