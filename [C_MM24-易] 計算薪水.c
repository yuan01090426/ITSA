#include<stdio.h>
int main(){
    int a,b;
    while(scanf("%d %d",&a,&b)!=EOF){
        if(a<=60)printf("%.1f\n",a*b);
        else if(a>60&&a<=120)printf("%.1f\n",(60*b)+((a-60)*b*1.33));
        else printf("%.1f\n",(60*b)+(60*b*1.33)+((a-120)*b*1.66));
    }
    return 0;
}
