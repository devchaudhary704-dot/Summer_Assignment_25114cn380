#include <stdio.h>
int main (){
    int n,d,count=0;
    printf("enter the number:");
    scanf("%d",&n);
    while(n>0){
        
        count ++;
        n/=10;
    }printf("NUMBER OF DIGITS %d",count);
return 0;

}