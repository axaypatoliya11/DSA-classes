#include<stdio.h>
#include<string.h>
#include "stack_ops.h"


int main(){
    int count = 0;
    int str[20];
    printf("enter the string: ");
    scanf("%d", str);

    int n = sizeof(str)/sizeof(int);
    char stack[n];
    int top = 0;


    for(int i=0; i<n; i++){
        while(str[i]!=0){
            push(str, &top, str[i], n);
        }
        while(str[i]==pop(str,&top)){
            count++;
        } 
    }

    if(count==n/2){
        printf("palindrome");
    } else{
        printf("not palindrome");
    }





    return 0;
}

// change the header file
// palindrome using stack
// check wether the number of a == b or not