#include<stdio.h>
int main(){
    int n,i,a;
    while(scanf("%d",&n)!=EOF){
        a=0;
        for(i=0;i<=n;i++){
            if(i%6==0&&i%12!=0){
                a=a+i;
            }
        }
        printf("%d\n",a);
    }
    return 0;
}
