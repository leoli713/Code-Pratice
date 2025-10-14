#include<stdio.h>
#include <stdlib.h>
int main(){
    int n,a[1000],b[1000],i,o,x,y,z,sum=0,sub=0,clp=0;


    while(scanf("%d",&n)!=EOF){
        for(i=n;i>0;i--){
            scanf("%1d",&x);
            a[i]=x;
        }
        for(o=n;o>0;o--){
            scanf("%1d",&y);
            b[o]=y;
        }
        for(z=n;z>0;z--){
            sub=a[z]-b[z];
            sub=abs(sub);
            clp=10-sub;
            if(sub>clp)sum+=clp;
            else{sum+=sub;}
        }
        printf("%d\n",sum);
        sum=0;
        }
  }

