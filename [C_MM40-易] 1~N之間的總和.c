#include<stdio.h>
int main(){
    int a,i,cnt;
    while(scanf("%d",&a)!=EOF){
        cnt=0;
        printf("1");
        for(i=1;i<=a;i++){
            cnt=cnt+i;
        }
        for(i=2;i<=a;i++){
            printf(" + %d",i);
        }
        printf(" = %d\n",cnt);
    }
    return 0;
}
