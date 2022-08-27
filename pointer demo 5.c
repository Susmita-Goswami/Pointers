#include<stdio.h>
int main(void)
{
    int x=10,y=20,temp;
    int *ptr1,*ptr2;
    ptr1=&x,ptr2=&y;
    temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
    printf("%d\n",*ptr1);
     printf("%d",*ptr2);

    getch ();
}

