#include<stdio.h>
int main(){
    int a,b,c;
    int sum,average,smallest,largest;
    scanf("%d %d %d",&a,&b,&c);
    sum=a+b+c;
    printf("sum:%d\n",sum);
    average=(a+b+c)/3.0;
    printf("average:%d\n",average);
    if(a>b){
        if(a>c){
            largest=a;
            if(b>c){
                smallest=c;
            }   
            else{
                smallest=b;
                }
        }
        else if(c>a){
            largest=c;
            smallest=b;

        }
    }
    else if(b>a){
        if(b>c){
            largest=b;
            if(c>a){
                smallest=a;
            }
            else{smallest=c;}
        }
        else if(c>b){
            largest=c;
            smallest=a;     
            }
        }
    printf("smallest:%d\n",smallest);
    printf("largest:%d",largest);
    return 0;
    
}

    
