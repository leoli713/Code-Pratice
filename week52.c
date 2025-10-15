#include<stdio.h>
int main(){
    int n,pad,pool_size,strike,x,y,r,w,p;
    int o=0;
    float max;
    float a[100];
    scanf("%d%d%d%d",&n,&pad,&pool_size,&strike);
    for(x=0;x<pad;x++){
        a[x]=-99999;
            }
        
    for(y=0;y<n;y++){
        scanf("%f",&a[pad+y]);
    }
    for(r=pad+n;r<n+2*pad;r++){
        a[r]=-99999;
    }
    for(w=0;w+pool_size<=n+2*pad;w+=strike){
        max=a[w];
        for(p=0;p<pool_size;p++){
            if(a[w+p]>max){
                max=a[w+p];
            }
        }
        printf("%3d,%10f\n",o,max);
        o++;

    }
return 0;
}