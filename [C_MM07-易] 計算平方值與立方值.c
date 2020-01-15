#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b,c;
    while(scanf("%d",&a)!=EOF){
        b=a*a;
        c=b*a;
        printf("%d %d %d\n",a,b,c);
    }
    return 0;
}
