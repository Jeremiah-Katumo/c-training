#include <stdio.h>

int main() {
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
    printf("Old enough to vote!");
    } else {
    printf("Not old enough to vote.");
    }

    ////////////////////
    int doorCode = 1337;

    if (doorCode == 1337) {
      printf("Correct code.\nThe door is now open.");
    } else {
      printf("Wrong code.\nThe door remains closed.");
    }
    ///////////////////
    int myNum = 10; // Is this a positive or negative number?

    if (myNum > 0) {
      printf("The value is a positive number.");
    } else if (myNum < 0) {
      printf("The value is a negative number.");
    } else {
      printf("The value is 0.");
    }

    ///////////////////
    int myAge = 25;
    int votingAge = 18;

    if (myAge >= votingAge) {
      printf("Old enough to vote!");
    } else {
      printf("Not old enough to vote.");
    }

    ///////////////////
    int myNum = 5;

    if (myNum % 2 == 0) {
      printf("%d is even.\n", myNum);
    } else {
      printf("%d is odd.\n", myNum);
    }

    return 0;
}
