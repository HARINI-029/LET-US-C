
//Print prime numbers between 1 to 300
#include <stdio.h>
#include <math.h>

int main() {
    int n, i, flag;

    for (n = 2; n <= 300; n++) {
        flag = 0; // Reset flag for each number

        for (i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                flag = 1;
                break;
            }
        }

        if (flag == 0) {
            printf("%d is a prime number\n", n);
        }
    }

    return 0;
}
