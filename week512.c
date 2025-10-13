#include<stdio.h>
int main(){
    int T,Day,Par,x,y,z,w,r;
    int sum =0;
    scanf("%d",&T);
    for(x=0;x<T;x++){
         int a[10000]={0};
        scanf("%d",&Day);            
        scanf("%d",&Par);
        for(y=Par;y>0;y--){
            scanf("%d",&z);
            for(w=z;w<=Day;w+=z){
                if(w%7==6||w%7==0){
                    a[w]=0;
                }
                else{a[w]=1;} 
            }
        }
        for(r=Day;r>0;r--){
            if(a[r]==1){
                sum+=1; 
            }
        }
    printf("%d\n",sum);  
    sum=0;  
    }
    return 0;
}