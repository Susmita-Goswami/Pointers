#include<stdio.h>
int main(void)
{
    int x=5;
    int *ptr;
    ptr=&x;
    printf(" %d\n",x);   //int x= int *ptr
    printf(" %d\n",&x);
    printf(" %d\n",ptr);
    printf(" %d\n",*ptr);
    printf(" %d\n",&ptr);
    return 0;
}
