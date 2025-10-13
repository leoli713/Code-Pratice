#include<stdio.h>
void swap( int *x, int *y){
    int a;
    a=*x;
    *x=*y;
    *y=a;
}
 
int main(){
     int x = 0, y = 0;
    scanf("%i %i", &x ,&y);
    printf("Befor Swap, x: %i, y: %i\n",x,y);
    swap(&x,&y);
    printf("Aftre Swap, x: %i, y: %i\n",x,y);
    return 0;
}