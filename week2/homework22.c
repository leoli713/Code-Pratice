#include<stdio.h>
int main() { 
    int n,k,m,x,y; 

    scanf("%d",&k); 

    while (k > 0) {
        scanf("%d%d",&n,&m); 
        int x=1;
        while(n>0){
            x=((n%m)*x)%m;
            n=n-1;
        }
        printf("%d\n",x);
        k = k - 1; 
    } 
    return 0; 
}  