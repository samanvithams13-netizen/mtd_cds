#include <stdio.h>
int main()
{
    float num=(double)((int)17.55/3);//double to int 17.55 to 17 5 to double 
    printf("Num=%d \n",num);//num=5.00
    printf("Num=%f\n",num);
}