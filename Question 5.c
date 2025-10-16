//Question 5

#include <stdio.h>

int main() {
    int arr[10], i;
    int max, min, diff;

    printf("Enter 10 integers: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for(i = 1; i < 10; i++) {
        if(arr[i] > max)
            max = arr[i];
        if(arr[i] < min)
            min = arr[i];
    }


    diff = max - min;


    printf("Maximum value: %d\n", max);
    printf("Minimum value: %d\n", min);
    printf("Difference (max - min): %d\n", diff);

    return 0;
}
