//Question 7

#include <stdio.h>

int main() {
    int arr[10];
    int i, j;


    printf("Enter 10 integers: ");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }


    for(i = 0; i < 10; i++) {
        if(arr[i] == -1) 
            continue; 
        for(j = i + 1; j < 10; j++) {
            if(arr[i] == arr[j]) {
                arr[j] = -1; 
            }
        }
    }

    printf("Updated array (duplicates replaced by -1): ");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
