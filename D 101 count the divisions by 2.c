#include <stdio.h>

int coudiv(int n) {
    if (n % 2 != 0)
        return 0;
    return 1 + coudiv(n / 2);
}

int main() {
    int n = 40;
    printf("Divided by 2 count = %d", coundiv(n));
    return 0;
}
