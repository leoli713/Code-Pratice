#include<stdio.h>
int main(){
    int n,x,y,z,r,w;
    scanf("%d",&n);
    for(x=1;x<2*n-1;x+=2){
        for(y=x;y>0;y--){
            printf("A");
        }
        for(z=(2*n-1-x)/2;z>0;z--){
            printf("XA");
        }
        printf("\n");
        for(r=x;r>0;r--){\
        printf("X");
        }
        for(w=(2*n-1-x)/2;w>0;w--){
            printf("XA");
        }
        printf("\n");
    }
    if(x=2*n-1){
        for(x=2*n-1;x>0;x--){
            printf("A");
        }
    }
return 0;
}