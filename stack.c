#include<stdio.h>


int push(int arr[], int *top, int elem, int arr_len){
    if(*top>arr_len){
        return 0;
    } else{
        (*top)++;
        // printf("top is %d", *top);
        arr[*top] = elem;
        return 1;
    }
}

int pop(int arr[], int *top){
    if(*top==0){
        return 0;
    } else{
        (*top)--;
        return arr[*top+1];
    }
}

int seek(int arr[], int *top, int ind){
    if((*top-ind+1)<=0){
        return 0;
    } else{
        return arr[*top-ind+1];
    }
}

int change(int arr[], int *top, int ind, int new_val){
    if((*top-ind+1)<=0){
        return 0;
    } else{
        arr[*top-ind+1] = new_val;
    }
}

int main(){


    int op;

    int n=3;
    int top=0;
    int arr[n+1];
    arr[0] = 000;
    int elem;
    do{
    
        printf("enter 1 for push\n2 for pop\n3 for search\n4 for change\n0 for exit");
        scanf("%d",&op);



        if(op==1){
            while (1)
            {
                printf("enter the element to push: ");
                scanf("%d", &elem);

                if(push(arr, &top, elem, n)==0){
                    printf("stack overflow\n");
                    break;
                } else{
                    push(arr, &top, elem, n);
                    printf("element pushed\n");
                }
            }
        }


        if(op==2){
            while (1)
            {
                if (pop(arr, &top)==0){
                    break;
                } else{
                    printf("after pop top elem is %d\n", pop(arr, &top));
                }   
            }
        }

        if(op==3){
            printf("which index you want to find?: ");
            int ind;
            scanf("%d", &ind);
            if(seek(arr, &top, ind)==0){
                printf("underflow");
            } else{
                printf("element is %d", seek(arr, &top, ind));
            }
        }


        if(op==4){
            printf("which index you want to change?: ");
            int ind_ch;
            scanf("%d", &ind_ch);
            printf("enter the new value: ");
            int new_val;
            int old_one = arr[ind_ch];
            scanf("%d", &new_val);
            if(seek(arr, &top, ind_ch)==0){
                printf("underflow");
            } else{
                printf("old element is %d\nchanged element is %d",old_one, change(arr, &top, ind_ch, new_val));
            }
        }
    }while (op!=0);
    
    

    return 0;
}