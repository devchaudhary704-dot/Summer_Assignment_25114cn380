#include <stdio.h>
int main() {
    int n,d,rev=0,temp;
    printf("enter a number :");
    scanf("%d",&n);
    while(n>0)
    {
        d=n%10;
        rev=rev*10+d;
        n=n/10;

    }
    
    if(n==rev){
    printf("the number is palindrome");
    }
    else {
    printf("the number is not palindrome");
    }

    return 0;
}