#include <iostream>
using namespace std;

int main() {
    int a, b;
    char c;

    scanf("%i %c %i", &a, &c, &b);

    if (c == '+') {
        printf("%i + %i = %i\n", a, b, a + b);
    }
    if (c == '-') {
        printf("%i - %i = %i\n", a, b, a - b);
    }
    if (c == '*') {
        printf("%i * %i = %i\n", a, b, a * b);
    }
    if (c == '/') {
        if (b == 0) {
            printf("Greska: Dijeljenje s nulom nije moguce!\n");
        }
        else {
            printf("%i / %i = %.2f\n", a, b, (float)a / b);
        }
    }

    return 0;
}