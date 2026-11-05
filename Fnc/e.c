#include <stdio.h>
int multiply(int x, int y){
    int temp;
    temp = x*y;
    return temp;
}
int main(){
    int a = 10, b = 20, ans;
    ans = multiply(a, b);
    printf("%d", ans);
}