#include<stdio.h>
int main(){
    int n,i,a,b;
    while(scanf("%d",&n)!=EOF){
        a=n/35;

        for(i=1;i<35*a;i++){
            if(i%35==0){
                printf("%d ",i);
            }
        }
        printf("%d\n",35*a);
    }
    return 0;
}
