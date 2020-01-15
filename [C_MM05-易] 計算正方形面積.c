#include <stdio.h>
#include <stdlib.h>
int main(){
    double a=0;
    while(scanf("%lf",&a)!=EOF){
        printf("%.1f\n",(a*a)+0.05);
    }
    return 0;
}

