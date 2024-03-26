#include <stdio.h>

int main() {
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
        printf("Old enough to vote!\n");
    } else {
        printf("Not old enough to vote.\n");
    }

    ////////////////////
    int doorCode = 1337;

    if (doorCode == 1337) {
      printf("Correct code.\nThe door is now open.\n");
    } else {
      printf("Wrong code.\nThe door remains closed.\n");
    }

    ///////////////////
    int myNum = 10; // Is this a positive or negative number?

    if (myNum > 0) {
      printf("The value is a positive number.\n");
    } else if (myNum < 0) {
      printf("The value is a negative number.\n");
    } else {
      printf("The value is 0.");
    }

    ///////////////////
    int myVal = 5;

    if (myVal % 2 == 0) {
      printf("%d is even.\n", myVal);
    } else {
      printf("%d is odd.\n", myVal);
    }

    return 0;
}
