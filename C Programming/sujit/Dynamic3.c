#include<stdio.h>
#include<stdlib.h>

int main()
{
    int *ptr = NULL;

    printf("Enter the size of Array \n");
    scanf("%d",&size);
    
    //Step 1 : Allocate the memory
    ptr = (int *)malloc(sizeof(int)*5);
    //Step 2 : Use the memory
    ptr = (int *)realloc(sizeof(int)*7);
    //ptr = (int *)calloc(sizeof(int)*3);
    //Step 3 : Deallocate the memory
    free(ptr);

    return 0;
}