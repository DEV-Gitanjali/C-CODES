#include<stdio.h>

int main()
{
    int number=50;
    int *p;
    p=&number;

    printf("adress of p variable is %x\n",*p);
    printf("value of p variable %d\n",*p);
    printf("number of p variable %d\n",*p);


    return 0;


}