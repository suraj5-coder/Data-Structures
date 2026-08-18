#include<stdio.h>
void change_by_value(int a)
{
    a=10;
}

void change_value_by_pointer(int *p)
{
    *p=100;
}

int main()
{
int x=1000;
change_by_value(x);
printf("change by value %d \n",x);
change_value_by_pointer(&x);
printf("change value by pointer %d \n",x);
return 0;

}