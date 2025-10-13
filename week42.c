#include<stdio.h>
unsigned char id[10001]; 
int main()
{
    int N,R,i,f;
    while(scanf("%d%d",&N,&R)==2) {
        /* At the beginning, each of the N divers has a numbered tag */
        for(i = 1; i <= N; ++i) {
            id[i] = 1;
        }
        while(scanf("%d",&i)!= EOF){
            id[i]=0;
        }
        int f=1;
         for(i=1;i<=N;i++){   
            if(id[i]==1){
                if(f==1){
                    printf("%d",i);
                    f=0;
                }
            printf(" i");
        }
        }
        if(N==R){
            printf("*");
        }
    }
    return 0;
}