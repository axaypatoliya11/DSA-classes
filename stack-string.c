#include<stdio.h>
#include<string.h>

int push(char arr[], int *top, int elem, int arr_len){
    if(*top>arr_len){
        return 0;
    } else{
        (*top)++;
        // printf("top is %d", *top);
        arr[*top] = elem;
        return 1;
    }
}

char pop(char arr[], int *top){
    if(*top==0){
        return "n";
    } else{
        (*top)--;
        // return 1;
        return arr[*top+1];
    }
}

char seek(char arr[], int *top, int ind){
    if((*top-ind+1)<=0){
        return "n";
    } else{
        return arr[*top-ind+1];
    }
}

char change(char arr[], int *top, int ind, char new_val){
    if((*top-ind+1)<=0){
        return "n";
    } else{
        arr[*top-ind+1] = new_val;
    }
}


int main(){


    int op,reply;

    int n=3;
    int top=0;
    char arr[n+1];
    arr[0] = "o";
    char elem;
    do{
    
        printf("enter 1 for push\n2 for pop\n3 for search\n4 for change\n0 for exit");
        scanf("%d",&op);



        if(op==1){
            while (1)
            {
                printf("enter the element to push: ");
                scanf(" %c", &elem);
                reply = push(arr, &top, elem, n);
                if(reply==0){
                    printf("stack overflow\n");
                    break;
                } else{
                    printf("element pushed\n");
                }
            }
        }


        if(op==2){
            while (1)
            {
                if (pop(arr, &top)=="n"){
                    break;
                } else{
                    printf("after pop top elem is %c\n", pop(arr, &top));
                }   
            }
        }

        if(op==3){
            printf("which index you want to find?: ");
            int ind;
            scanf("%d", &ind);
            if(seek(arr, &top, ind)=="n"){
                printf("underflow");
            } else{
                printf("element is %c", seek(arr, &top, ind));
            }
        }


        if(op==4){
            printf("which index you want to change?: ");
            int ind_ch;
            scanf("%d", &ind_ch);
            printf("enter the new value: ");
            char new_val;
            int old_one = arr[ind_ch];
            scanf(" %c", &new_val);
            if(seek(arr, &top, ind_ch)=="n"){
                printf("underflow");
            } else{
                printf("old element is %c\nchanged element is %c",old_one, change(arr, &top, ind_ch, new_val));
            }
        }
    }while (op!=0);


    return 0;
}