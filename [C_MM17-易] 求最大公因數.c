#include <stdio.h>
int main(){
    int a=0,b=0;
    scanf("%d %d",&a,&b);
    int num1=0,num2=0,c=0;
    if(a>=b){
        num1=a;
        num2=b;
    }
    else{
        num1=b;
        num2=a;
    }
    while(num2>0){
        c=num1%num2;
        num1=num2;
        num2=c;
    }
    printf("%d\n",num1);
    return 0;
}
