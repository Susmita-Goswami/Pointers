#include<stdio.h>
void swapping(int *ptr1, int *ptr2);
int main(void)
{
    int x=10,y=20,temp;
    int *ptr1,*ptr2;
    printf(" before swapping x=%d, y=%d\n",x,y);
    swapping(&x,&y);
    printf(" after swapping x=%d, y=%d\n",x ,y);
    getch ();
}
void swapping(int *ptr1, int *ptr2)
{
    int  temp=*ptr1;
    *ptr1=*ptr2;
    *ptr2=temp;
}
