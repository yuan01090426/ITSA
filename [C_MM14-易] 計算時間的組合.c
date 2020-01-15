#include<stdio.h>
int main(){
    int n=0,a=0,b=0,c=0,d=0;
    while(scanf("%d",&n)!=EOF){
        a=n/86400;
        b=(n%86400)/3600;
        c=((n%86400)%3600)/60;
        d=((n%86400)%3600)%60;
        printf("%d days\n",a);
        printf("%d hours\n",b);
        printf("%d minutes\n",c);
        printf("%d seconds\n",d);
    }
    return 0;
}
