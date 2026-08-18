#include <stdio.h>
int main()
{
    int x=0;
    int *ptr1 = &x;
    int *ptr2 = NULL;
    if(ptr2!=NULL)
    {
        printf("pointer is null, dereference the pointer");
    }
    return 0;
}