#include<stdio.h>
int main(){
    int i,n;
    long long int ans=1;
    while(scanf("%d",&n)!=EOF){
            ans=1;
        for(i=1;i<=n;i++){
            ans=ans*i;
        }
    printf("%lli\n",ans);
    }
    return 0;
}
