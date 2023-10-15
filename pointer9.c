#include<stdio.h>

void  main()
{
    int a=10;
    int *p;
    int **pp;
     p= &a;
     pp=&p;

     printf( "adress of a:%x\n",a );


     printf( "adress of p:%x\n",p );

     printf(" value store at p:%d\n",*p );

     printf  ( "value stored at pp:%d\n",**pp );

     

}