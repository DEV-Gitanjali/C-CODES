#include<stdio.h>
int main()
{
    int val=10;
    int *p;
    p=&val;

    val=10;

    printf(" value is :%d", *p);
    return 0;
}