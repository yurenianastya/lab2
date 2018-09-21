#include <stdio.h>
#include <math.h>

int main()  {

    int MIN; /*6*/
    int MAX; /*9*/
    double step = 0.2;

    printf("Enter MIN value\n");
    scanf("%d" , &MIN);
    printf("Enter MAX value\n");
    scanf("%d", &MAX) ;

    printf("Argument value = MIN value\n");
    double res;

    for(double x=MIN; x<=MAX+step/2;x+=step){
        if(x<7){
            res = log10(x*log(x)+sin(x));
            printf("%f - ", x);
            printf("%f\n", res);
        }else if(x>=7 && x<8){
            res = log(sin(x)+4)/log(3);
            printf("%f - "  ,x);
            printf("%f\n", res);;
        }else if(x>=8){
            res = pow((16+(1/cos(x))),-1);
            printf("%f - "  ,x);
            printf("%f\n", res);;
        }
    }
    return 0;
}
