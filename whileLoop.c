#include <stdio.h>

int main() {
    ////////////////
    int countdown = 3;

    while (countdown > 0) {
      printf("%d\n", countdown);
      countdown--;
    }

    printf("Happy New Year!!\n");

    /////////////////
    int dice = 1;

    while (dice <= 6) {
      if (dice < 6) {
        printf("No Yatzy\n");
      } else {
        printf("Yatzy!\n");
      }
      dice = dice + 1;
    }

    ////////////////
    int i = 0;

    do {
      printf("%d\n", i);
      i++;
    }
    while (i < 5);
}
