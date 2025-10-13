#include<stdio.h>
int main(){
    int T,Day,Par,x,y,z,w,r;
    int sum =0;
    int a[10000];
    scanf("%d",&T);
    for(x=T;T>0;x--){
        scanf("%d",&Day);            
        scanf("%d",&Par);
        // printf("%d%d",&Day,&Par);
        for(y=Par;y>0;y--){
            scanf("%d",&z);
            for(w=Day/z;Day>0;w--){
                if(z%7==6||z%7==0){a[z]=0;}
                else{a[z]=1;}
                z+=z;
            }
          }
          for(r=Day;Day>0;r--){
                if(a[r]==1){
                    sum+=1;
                    printf("%d/n",&sum);
                }
    }
    printf("%d/n",&sum);
        
    return 0;
        
    }
}