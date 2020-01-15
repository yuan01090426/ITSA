#include<stdio.h>
int main(){
    int n,m,i,a,tmp;
    while(scanf("%d %d",&n,&m)!=EOF){
        a=0;
        if(n<m){
            for(i=n;i<=m;i++){
                a=a+i;
            }
            printf("%d\n",a);
        }
        else{
            tmp=m;
            m=n;
            n=tmp;
            for(i=n;i<=m;i++){
                a=a+i;
            }
            printf("%d\n",a);
        }
    }
    return 0;
}
