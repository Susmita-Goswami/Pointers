#include<stdio.h>
int main(void)
{
    int x=10,y=20,z=30;
    int *ptr;
    ptr=&x;
    printf("x=%d",*ptr);
     ptr=&y;
    printf("y=%d",*ptr);
     ptr=&z;
    printf("z=%d",*ptr);
    getch ();
}
