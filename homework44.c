int search_and_insert(int key[],int value[],int n,int x)
{
    int i,j;
    for(i = 0; i < n; ++i) {
        if (x==key[i]) {
            value[i]++;
            return n;
        } 
    else if (x < key[i]) {
            break;
        }
    }
    for(j = n; j>i; j--) {
        key[j] = key[j-1];
        value[j]=value[j-1];
    }
    n++;
    key[i]  = x;
    value[i]= 1;
    return n;
    }
#include<stdio.h>
int main(){
    int key[100000];
    int value[100000];
    int r,a,b,z,x,s,t;
    int n=0;
    int max=0;
    scanf("%d%d%d",&r,&a,&b);
    for(z=0;z<r;z++){
        scanf("%d",&x);
        n=search_and_insert(key,value,n,x);
    }
    for(s=0;s<r;s++){
        if(value[s]>max){
            max=value[s];
        };
    }
    for(t=0;t<r;t++){
        if(value[t]==max){
        printf("%d appears %d times\n",key[t],max);
        }
    }
}

    