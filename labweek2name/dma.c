#include <stdio.h>
#include <stdlib.h>

void main(){
    int *arr_malloc;
    int n;
    printf("enter a number: \n");
    scanf("%d",&n);

    arr_malloc = (int *) malloc(n* sizeof(int));
    free(arr_malloc);

    int *arr_calloc;
    arr_malloc = (int *) calloc(n, sizeof(int));
    free(arr_calloc);
}
