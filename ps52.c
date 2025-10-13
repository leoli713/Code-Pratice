#include <stdio.h>
 
void bubbleSort(int a[]){
    
}
 
int main(){
    int a[10] = { 0 };
    for ( int i = 0 ; i < 10 ; i++ ) scanf("%d", &a[i]);
    
    printf("Before Sorting:\n");
    for ( int i = 0 ; i < 10 ; i++ ) printf("%d ", a[i]);
    printf("\n");
    
    bubbleSort(/*TODO*/);
    
    printf("After Sorting:\n");
    for ( int i = 0 ; i < 10 ; i++ ) printf("%d ", a[i]);
    printf("\n");
    return 0;
}
