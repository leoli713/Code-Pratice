#include<stdio.h>
int main()
{
    int n,hour,minute,second,i=0;
    scanf("%d",&n);
    while (i < n) {
         scanf("%d:%d:%d", &hour, &minute, &second);
        if(hour<12){if(hour==0){
            printf("12:%02d:%02d a.m.\n",minute,second);
         }
        else if(hour!=0){printf("%02d:%02d:%02d a.m.\n",hour,minute,second); 
            }
        }
        else if(hour>=12){
            if(hour==12){
                printf("%02d:%02d:%02d p.m.\n",hour,minute,second);
            }
            else {hour=hour-12;
                printf("%02d:%02d:%02d p.m.\n",hour,minute,second);
            }
        }

        i = i + 1;
    }
    return 0;
}