

#include <stdio.h>

int main() {
    int marks, pass[10], fail[10];
    int i, passCount = 0, failCount = 0;
    float passSum = 0, failSum = 0;

    printf("Enter marks for students (enter -1 to stop):\n");

    for(i = 0; i < 10; i++) {
        scanf("%d", &marks);

        if(marks == -1)
            break;

        if(marks >= 5 && marks <= 10) {
            pass[passCount++] = marks;
            passSum += marks;
        }
        else if(marks >= 0 && marks < 5) {
            fail[failCount++] = marks;
            failSum += marks;
        }
        else {
            printf("Invalid input. Enter marks between (0–10) only.\n");
            i--; // so this iteration is not wasted
        }
    }

    // Display stored marks
    printf("\n--- Passed Students Marks ---\n");
    if(passCount == 0)
        printf("No passing marks entered.\n");
    else {
        for(i = 0; i < passCount; i++)
            printf("%d ", pass[i]);
        printf("\nAverage of passing marks = %.2f\n", passSum / passCount);
    }

    printf("\n--- Failed Students Marks ---\n");
    if(failCount == 0)
        printf("No failing marks entered.\n");
    else {
        for(i = 0; i < failCount; i++)
            printf("%d ", fail[i]);
        printf("\nAverage of failing marks = %.2f\n", failSum / failCount);
    }

    return 0;
}
