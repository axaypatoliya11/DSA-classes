// POSTFIX IMPLEMENTATION

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int op(int a, int b, char c){
    switch (c)
    {
    case '+':
        return a+b;
        break;

    case '-':
        return a-b;
        break;
    
    case '*':
        return a*b;
        break;

    case '/':
        return a/b;
        break;
    
    default:
        break;
    }
    
}

int main(){
    char exp[10];
    scanf("%s", exp);
    int top = 0;
    int result = 0;
    char stack[strlen(exp)];

    for(int i=0; i<strlen(exp); i++){
        if(isdigit(exp[i])){
            stack[top] = exp[i];
            top++;
        } else{
            top--;
            int op2 = exp[top]-'0';
            top--;
            int op1 = exp[top]-'0';
            result = op(op2, op1, exp[i])+'0';
            stack[top] = result-'0';
            // top++;
        }
    }

    printf("%d", stack[top]);


    return 0;
}