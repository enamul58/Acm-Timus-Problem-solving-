#include <stdio.h>

int main(){
    int num1, num2, b=0;
    scanf("%d %d", &num1, &num2);
    for (int i = 0; i <= num2; i++){
        b++;
    }
    printf("%d", b*num1);
    return 0;
}