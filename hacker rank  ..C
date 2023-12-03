// WA STRING FIRSTNAME AND LASTNAMETO STORE DETAILS OF USER & PRINT ALL YHE CHARACTERS USING LOOP
#include<stdio.h>

void printstring(char arr[]);

int main() {
    char firstname[] ="danish";
    char lastname[] ="dubey";

    printstring(firstname);
    printstring(lastname);
    return 0;

}
void printstring(char arr[]) {
    for(int i=0;arr[i] !='\0';i++){
        printf("%c",arr[i]);
    }
    printf("\n");
}