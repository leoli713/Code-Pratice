#include<stdio.h>
int main(){
    int n,i,nb,nr,ng,nw;
    scanf("%d",&n);
    nr=n/3;
    nw=n-nr;
    nb=nr/5;
    ng=nb/7;
    nb=nb-ng;
    nr=nr-nb-ng;
    printf("%d,%d,%d,%d\n",nw,nr,nb,ng);
      scanf("%d",&i);  
        if(i<=53+(ng-1)*105&&(i-53)%105==0){
            printf("green");
        }
        else if(i<=8+(nb-1)*15&&(i-8)%15==0){
                printf("blue");
        }
        else if(i<=2+(nr-1)*3&&(i-2)%3==0){
                printf("red");
        }
       else{printf("white");}
    while(scanf("%d",&i)==1){
        if(i<=53+(ng-1)*105&&(i-53)%105==0){
            printf(",green");
        }
        else if(i<=8+(nb-1)*15&&(i-8)%15==0){
                printf(",blue");
        }
        else if(i<=2+(nr-1)*3&&(i-2)%3==0){
                printf(",red");
        }
       else{printf(",white");}
    }
return 0;
}