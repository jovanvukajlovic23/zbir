#include <stdio.h>

int main() {
    int a, b, zbir;
    printf("Unesite prvi broj: ");
    scanf("%d", &a);
    printf("Unesite drugi broj: ");
    scanf("%d", &b);
    zbir = a + b;
    printf("Zbir: %d + %d = %d\n", a, b, zbir);
    return 0;
}
