#include<stdio.h>
int main(){
    int a;
    double b;
    while(scanf("%d",&a)!=EOF){
        b=a*1.6;
        printf("%.1f\n",b);
    }
    return 0;
}
