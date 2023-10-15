#include<stdio.h>
int main()
{
    int num[]= {22,23,14,67};

    int a, *point[4];


    for(a=0;a<=4;a++)
    {
        point[a] = &num[a];
    }

    for(a=0;a<=4; a++)
    {
        printf("value=>val[%d]:%d \n",a,*point[a]);

    }


    return 0;

}