#include <stdio.h>
    long long int dpoly(int x, int a[],int n){
     long long int xp;
    long long int ans;
    int i;
     ans=a[n-1];
    for(ans=a[n-1],xp=1,i = n-2; i>=0; --i) {
        xp  *= x; 
        ans += (n-i)*a[i]*xp;  
    }
    return ans;
    }

int main(){
  int a[500];
  int n;
  int i;
  int x;
  long long int ans;
  char c;
  while (scanf("%d", &x) != EOF) {
      n = -1;
      do {
           n++;                     
           scanf("%d%c", &a[n], &c); 
     } while (c == ' '); 
    ans = dpoly( x,  a, n);
    printf("%lld\n", ans);
  }
  return 0;
}