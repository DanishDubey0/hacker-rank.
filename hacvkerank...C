// WAP TO FIND PERCENTAGE OF MARKS IN SCHOOL
#include<stdio.h>
int calcpercentage(int science,int math, int sst);
int main()
{
    int sc = 34;
    int math = 56;
    int sst =98;

    printf("percentage is: %d", calcpercentage(sc,math,sst));
    return 0;
}

int calcpercentage(int science, int math, int sst){
    return ((science+math+sst)/3*100);
}