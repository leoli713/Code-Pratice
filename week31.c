#include<stdio.h>
int main (){
    int weight, diameter;
    while (scanf("%d%d",&weight,&diameter)==2){
    if(weight>=300 && diameter>=12){
        printf("A\n");
    }
    else if(diameter>=10){
        printf("B\n");
    }
    else if(diameter<=10 && weight>=150){
        printf("C\n");
    }
    else{printf("D\n");
    }
    }
return 0;
}
