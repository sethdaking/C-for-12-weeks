#include <stdio.h>

int main() {
    int arr[] = {10, 20, 30};
    int *p = arr;

    printf("%d \n", *(p + 2)); 
    
    *(p + 2) = 40; 
    
    printf("%d \n", *(p + 2)); 
    
    return 0;
}