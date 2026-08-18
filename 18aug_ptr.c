#include<stdio.h>

int main(){
    int n = 10;
    int *ptr = &n;
    printf("Address of ptr: %p\n",&ptr);
    printf("Address of value at ptr: %p\n",ptr);
    printf("Value : %d\n",*ptr);
    printf("Address of ptr: %p\n",&ptr);
}