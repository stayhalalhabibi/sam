#include <stdio.h>
multiply(int,int);
int main(){
    int a = 30, b=20, ans;
    ans = multiply(a, b);
    printf("%d",ans);

}
int multiply(int x, int y){
    int temp;
    temp = x*y;
    return temp;
}