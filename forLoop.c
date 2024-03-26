#include <stdio.h>

int main() {
    int i, j;

    // Outer loop
    for (i = 1; i <= 2; ++i) {
      printf("Outer: %d\n", i);  // Executes 2 times

      // Inner loop
      for (j = 1; j <= 3; ++j) {
        printf(" Inner: %d\n", j);  // Executes 6 times (2 * 3)
      }
    }

    //////////////////
    int number = 2;
    int n;

    // Print the multiplication table for the number 2
    for (n = 1; n <= 10; n++) {
      printf("%d x %d = %d\n", number, n, number * n);
    }

    /////////////////
    for (int i = 0; i < 10; i++) {
    if (i == 4) {

    continue
    ;
      }
      printf("%d\n", i);
    }

    return 0;
}
