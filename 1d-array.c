#include<stdio.h>

int main(){
    int base, index, final_add;
    printf("enter the base address: ");
    scanf("%d", &base);
    printf("\nenter the index: ");
    scanf("%d", &index);
    final_add = base + (index-1)*sizeof(int);
    printf("\naddress of the given index is: %d\n", final_add);

    return 0;
}
