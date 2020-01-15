#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
    double a,b;
    while(scanf("%lf",&a)!=EOF){
        if(a>31){
            printf("Value of more than 31\n");
        }
        b=pow(2,a);
        printf("%d\n",b);
    }
    return 0;
}
