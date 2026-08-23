// Program to input and display age (int) and marks (float)
#include <stdio.h>

int main() {
    int age;
    float marks;

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your marks: ");
    scanf("%f", &marks);

    printf("age=%d\n", age);
    printf("marks=%f\n", marks);

    return 0;
}
