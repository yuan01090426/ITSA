#include<stdio.h>
int main(){
    int a,b,c,d,n,m,o,p;
    scanf("%d %d",&a,&b);
    scanf("%d %d",&c,&d);
    n=60*a+b;
    m=60*c+d;
    o=m-n;
    p=o/30;
    if(p<=4){printf("%d\n",30*p);}
    else if(p>4&&p<=8){printf("%d\n",120+40*(p-4));}
    else if(p>8){printf("%d\n",280+60*(p-8));}
    return 0;


}
