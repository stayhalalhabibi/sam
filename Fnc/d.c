#include <stdio.h>
int main(){
    double d;
    int a = 3;
    d = fun(a);
    printf("%f", d);  // int value
}
double fun(int a){    // error bzc of double valu
    double y = 9.8;
    return y * a;

}  

// note = forward declaration and DT should be same