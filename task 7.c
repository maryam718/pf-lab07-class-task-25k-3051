#include <stdio.h>

int main() {
    int arr[10], seen[10];  // `seen` stores first occurrence
    int i, j, k;
    
    // Initialize seen[] to a value not in input (like -9999)
    for(i = 0; i < 10; i++) {
        seen[i] = -9999;
    }

    // Step 1: Input
    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    // Step 2: Detect and mark duplicates using linear comparison
    j = 0; // index for seen[]
    for(i = 0; i < 10; i++) {
        int isDuplicate = 0;

        // check current value against previously seen values
        for(k = 0; k < j; k++) {
            if(arr[i] == seen[k]) {
                isDuplicate = 1;
                break;
            }
        }

        if(isDuplicate) {
            arr[i] = -1; // Mark duplicate
        } else {
            seen[j++] = arr[i]; // Add to seen[]
        }
    }

    // Step 3: Output
    printf("Updated Array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}

