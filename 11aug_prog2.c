//C program to reverse a number
#include <stdio.h>
int main() {
    int n;
    printf("enter a number: \n");
    scanf("%d",&n);
    if(n<=0)
    {
        printf("enter a valid number");
        return 0;
    }
    int temp;
    int sol=0;
    while(n!=0)
    {
        temp=n%10;
        sol=sol*10+temp;
        n=n/10;
    }
    printf("reversed number is: %d", sol);
    return 0;
}