#include <stdio.h>
int main() {
    int n,d,prod=1;
    printf("enter a number :");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        prod=prod*d;
        n=n/10;

    }
    printf("the product of digits are is %d",prod);
    return 0;
}