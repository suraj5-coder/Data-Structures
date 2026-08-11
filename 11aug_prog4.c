//C Program to Check Whether a Number is Prime or Not
#include<stdio.h>
int main(){
    int n;
    printf("enter a number \n");
    scanf("%d",&n);
    if(n<=1)
        {
            printf("enter a valid number");
            return 0;
        }
    for(int i=2;i<n;i++)
    {
        if(n%i==0)
        {
            printf("it is not a prime number");
            return 0;
        }
    }
    printf("it is a prime number");
    return 0;
}