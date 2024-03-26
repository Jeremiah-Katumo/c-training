#include <stdio.h>

int main() {

    printf("Hello World!\n\tI am learning C.\n\tAnd it is awesome!\\ \nBut be careful with its syntax\"");

    // Student data
    int studentID = 15;
    int studentAge = 23;
    float studentFee = 75.25;
    char studentGrade = 'B';

    // Print variables
    printf("Student id: %d\n", studentID);
    printf("Student age: %d\n", studentAge);
    printf("Student fee: %f\n", studentFee);
    printf("Student grade: %c", studentGrade);


    char a = 65, b = 66, c = 67;
    printf("%c\n", a);
    printf("%c\n", b);
    printf("%c", c);

    char myText[] = "Hello";
    printf("%s\n", myText);

    return 0;

}
