#include<stdio.h>
int main()
{
  int a,i,flag=0;

  while(scanf("%d",&a)!=EOF){
    flag=0;
    a--;
    while(a>=2){
        for(i=2;i<a;i++){
            if((a%i)==0)break;
            if(i==(a-1))flag=1;
        }
        if(flag==1)break;
        a--;
    }
    printf("%d\n",a);
  }

  return 0;
}
