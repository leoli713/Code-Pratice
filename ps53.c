	#include <stdio.h>
 
int plus( const int a, const int b ){
    return a+b;
}
 
int sub( const int a, const int b ){
    return a-b;
}
 
int multi( const int a, const int b ){
     return a*b;
}
 
int div( const int a, const int b ){
    return a/b;
}
 
int numberResult( int a, int b, int (*ops)(int, int) ){
    return (*ops)(a,b);
}
 
int main(){
    int x = 0, y = 0, ans = 0;
    scanf("%i %i", &x, &y);
    ans = numberResult(x, y, sub);
    ans = numberResult(x, y, multi);
    ans = numberResult(x, y, div);
    printf("%i", ans);
    return 0;
}
