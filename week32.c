#include<stdio.h>
int main (){
    int value,sum,minvalue,maxvalue,minindex,maxindex;
    int n=0;
    while(scanf("%d",&value)==1){
        if(n==0){
            printf("%d:%d",n,value);
        minvalue=value;
        maxvalue=value;
        }
        else{printf(",%d:%d",n,value);
        }
        if(value<=minvalue){
            minindex=n;
            minvalue=value;
        }
        if(value>maxvalue){
            maxindex=n;
            maxvalue=value;
        }
        n++;
        sum=sum+value;
    }
    printf("\n");
    printf("number:%d\n",n);
    printf("sum:%d\n",sum);
    printf("the index of the smallest input integer:%d\n", minindex);
    printf("the value of the smallest input integer:%d\n", minvalue);
    printf("the index of the largest input integer:%d\n",maxindex);
    printf("the value of the largest input integer:%d",maxvalue);
}