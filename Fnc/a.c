   #include <stdio.h>
   int main(){
    int a = 10, b = 20, ans;
    ans =  sharif(a, b);
    printf("%d", ans);
    return 0;
}

// 3. Define what the function actually does (e.g., adding the numbers)
int sharif(int x, int y) {
    return x * y; 
}