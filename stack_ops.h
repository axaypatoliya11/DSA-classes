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