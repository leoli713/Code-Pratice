#include<stdio.h>

int Accumulation(int n){
        if(n==0) return 0;
        if (n==1||n==2  ) return 1;
        return Accumulation(n-2) + Accumulation(n-1);
    }

int main(){
    int n;
    scanf("%d",&n);
    printf("%d",Accumulation(n));
    return 0;
}

