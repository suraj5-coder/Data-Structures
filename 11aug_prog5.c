//C Program to Display Prime Numbers Between Intervals
#include <stdio.h>
int main(){
int a,b;
    printf("enter two numbers \n");
    scanf("%d%d",&a,&b);
    if(a<=1)
        {
            printf("enter a valid number");
            return 0;
        }
        if(b<=1)
        {
            printf("enter a valid number");
            return 0;
        }

    for(int i=a;i<b;i++)
    {
        if(i<=1)
            continue;
        for(int j=2;j<i;j++)
        {
            if(i%j==0)
                break;
            if(j==i-1)
                printf("%d\n",i);
        }
    }
}