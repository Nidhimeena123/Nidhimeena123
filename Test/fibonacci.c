#include<stdio.h>
int main() {
    int n, num1=0, num2=1, num3;
    int i;

    printf("Enter the number : ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for (i=1;i<=n;i++) {
        printf("%d, ", num1);
        num3 = num1 + num2;
        num1 = num2;
        num2 = num3;
    }
    return 0;
}
