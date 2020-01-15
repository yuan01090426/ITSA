#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,sum,c;
    while(scanf("%d %d",&a,&b)!=EOF){
        sum=a+b;
        c=sum*sum;
        printf("%d\n",c);
    }
    return 0;
}
