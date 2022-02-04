#include<stdio.h>

int main(){
    int base, row, column, cm_rm, total_row, total_column, final_address;
    printf("enter the base address: ");
    scanf("%d", &base);
    printf("\nenter the row index: ");
    scanf("%d", &row);
    printf("\nenter the column: ");
    scanf("%d", &column);

    printf("\nfor column major enter [0] | for row major enter [1]");
    scanf("%d", &cm_rm);
    if(cm_rm==0){
        printf("\nenter the number of total column: ");
        scanf("%d", &total_row);
        final_address = base + ((column-1)*total_row + (row-1))*sizeof(int);
    } else{
        printf("\nenter the number of total row: ");
        scanf("%d", &total_column);
        final_address = base + ((row-1)*total_column + (column-1))*sizeof(int);
    }

    printf("address for given row & column is: %d\n", final_address);


    return 0;
}