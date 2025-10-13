#include<stdio.h>
#include<math.h>
int main(){
    float u,v,a,b,c, distance;
    scanf("%f,%f,%f,%f,%f",&u,v,a,b,c);
    int u,v,a,b,c, distance;
    scanf("%d,%d,%d,%d,%d",u,v,a,b,c);
    distance=fabs(a*u+b*v+c)/sqrt(a*a+b*b);
    printf("%.2f",distance);
    return 0;
}