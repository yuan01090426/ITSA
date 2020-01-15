#include<stdio.h>
int main(){
    int n=0;
    while(scanf("%d",&n)!=EOF){
        printf("NT10=%d\n",n/10);
        printf("NT5=%d\n",(n%10)/5);
        printf("NT1=%d\n",((n%10)%5));
    }
    return 0;
}
