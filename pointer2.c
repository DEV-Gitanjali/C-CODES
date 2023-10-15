

char* reverse(char*);

#include<stdio.h>

int main()
{   clrscr();
    printf("%s",reverse("computer"));
    getch();

}
 
 char* reverse(char* p)
 {
    int i , l;
    char ch;
    for(l=0;*(p+l)!='\0'; l++);
    for(i=0; i<l/2; i++)
    {
        ch= *(p+l);
        *(p+l) = *(p+l-1-i);
        *(p+l-1-i)= ch ;


    }

    return( p)


 }