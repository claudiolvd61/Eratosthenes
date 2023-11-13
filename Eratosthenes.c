#include <stdio.h>
#include <stdbool.h>

bool is_prime(int num) {
    if (num < 2) return false;
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) return false;
    }
    return true;
}

void compute_primes(int n) {
    if (n < 2) return;
    printf("Prime numbers up to %d:\n", n);
    for (int i = 2; i <= n; ++i) {
        if (is_prime(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main(int argc, char *argv[]) {
    int num;
    printf("Enter an integer: ");
    scanf("%d", &num);
    compute_primes(num);
    return 0;
}
//Aye! Aye! Captain

