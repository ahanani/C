#include <stdio.h>
#include <stdlib.h>

int findTheDigits(int n) {
    if (n < 10) {
        return n;
    } else {
        int sumOfDigits = n % 10;
        return (sumOfDigits + findTheDigits((n - (n % 10)) / 10));
    }
}

int main(int argc, char *argv[]) {
    int value = atoi(argv[1]);
    printf("%d\n", findTheDigits(value));
    return 0;
}
