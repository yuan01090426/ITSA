#include <stdio.h>
#include <stdlib.h>
int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    if((a>0&&b>0)||(a>0&&b<0)){
        printf("%d+%d=%d\n",a,b,a+b);
        printf("%d*%d=%d\n",a,b,a*b);
        printf("%d-%d=%d\n",a,b,a-b);
        printf("%d/%d=%d...%d\n",a,b,a/b,a%b);
    }
    else if(a<0&&b>0){
        printf("%d+%d=%d\n",a,b,a+b);
        printf("%d*%d=%d\n",a,b,a*b);
        printf("%d-%d=%d\n",a,b,a-b);
        printf("%d/%d=%d...%d\n",a,b,(a/b)-1,b+(a%b));
    }
    else if(a<0&&b<0){
        printf("%d+%d=%d\n",a,b,a+b);
        printf("%d*%d=%d\n",a,b,a*b);
        printf("%d-%d=%d\n",a,b,a-b);
        printf("%d/%d=%d...%d\n",a,b,(a/b)+1,(a%b)-b);
    }
    return 0;
}
