//C Program to Check Whether a Number is a Palindrome or Not
#include <stdio.h>
int main() {
    int n;
    printf("Enter a number: \n");
    scanf("%d",&n);
    if (n<=0)
    {
        printf("enter a valid number");
        return 0;
    }
    int num=n;
    int temp;
    int rev=0;
    while(n!=0)
    {
        temp=n%10;
        rev=rev*10+temp;
        n=n/10;
    }

    if(num==rev)
    {
        printf("it is a palindrome");
    }

    else
    {
        printf("it is not a palindrome");
    }
    return 0;
}