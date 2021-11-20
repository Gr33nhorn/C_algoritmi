#include <stdio.h>
#define S 291.67f
#define M 708.33f
int main(void){
double P, D, B;
P = 0.221*B;
D = 0.16*M + 0.26*(B-P-S-M);
B = 950.0 + D + P;
printf("%lf", P);
return 0;}
