#include<stdio.h>
int main(){
    int a,b,c,d,e;
    while(scanf("%d",&a)!=EOF){
        b=a/100;
        c=(a%100)/10;
        d=((a%100)%10);
        e=(b*b*b)+(c*c*c)+(d*d*d);
        if(a==e){
            printf("Yes\n");
        }
        else printf("No\n");
    }
    return 0;
}
