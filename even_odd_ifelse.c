#include <stdio.h>
int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    if(num % 2 == 0)
        printf("The number is even.", num);
    else
        printf("The number is odd.", num);
    
    return 0;
}