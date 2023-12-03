// WAF TO CALCULLATE SUM OF N NATURAL NUMBERS
#include<stdio.h>
int sum(int n);
int main()
{
 printf("sum is :%d",sum(5));
 return 0;
}

int sum(int n){
    if (n==1){
        return 1;
    }
    int sumNminus1= sum(n-1);//sum of 1 to n
    int sumN= sum(n-1) +n;
    return sumN;
}