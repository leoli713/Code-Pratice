#include<stdio.h>
#include <math.h>
int main(){   
    double a,b;
    int x,n;
    while (scanf("%lf%lf",&a,&b)==2) {
        log(a)<=x/200<=log(b);
        n= floor(log(b)*200)-ceil(log(a)*200)+1;
        printf("%d\n",n) ;
    }
    return 0;
}