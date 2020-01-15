#include<stdio.h>
int main(){
    int a,b,c;
    int A,B,C;
    while(scanf("%d %d %d",&a,&b,&c)!=EOF){
        A=a*a;
        B=b*b;
        C=c*c;
        if(((a+b)<=c)||((a+c)<=b)||((b+c)<=a)){
            printf("Not Triangle\n");
        }
        else if(((A+B)==C)||((A+C)==B)||((B+C)==A)){
            printf("Right Triangle\n");
        }
        else if(((A+B)<C)||((A+C)<B)||((B+C)<A)){
            printf("Obtuse Triangle\n");
        }
        else if(((A+B)>C)||((A+C)>B)||((B+C)>A)){
            printf("Acute Triangle\n");
        }


    }
    return 0;
}
