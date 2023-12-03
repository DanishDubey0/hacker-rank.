// WAP TO FIND FACTORIAL OF A N NUMBERS
#include<stdio.h>
int fact (int n);
int main() 
{
  printf("fact is :%d", fact(9));
}

int fact(int n){
    if(n==0){
        return 1;
    }
    int factNminus =fact(n-1);
    int factN =fact(n-1) +n;
    return factN;
}