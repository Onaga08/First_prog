#include <stdio.h>
#include <string.h>
#include <math.h>
int square (int a){
    return a*a;
}
int cube (int a){
    return a*a*a;
}
int power (int a, int b){
    return pow(a, b);
}
int main(){
    int a,b,c;
    printf("Enter number and exponent: ");
    scanf("%d %d", &a, &b);
    if(b == 2) c = square(a);
    else if(b == 2) c = cube(a);
    else c = power(a, b);
    printf("The resultant number is: %d", c);
    return 0;
}