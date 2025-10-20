#include <stdio.h>

int main() {
    int arr[10], seen[10];  
    int i, j, k;
    

    for(i = 0; i < 10; i++) {
        seen[i] = -9999;
    }


    printf("Enter 10 integers:\n");
    for(i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    j = 0; 
    for(i = 0; i < 10; i++) {
        int isDuplicate = 0;

        
        for(k = 0; k < j; k++) {
            if(arr[i] == seen[k]) {
                isDuplicate = 1;
                break;
            }
        }

        if(isDuplicate) {
            arr[i] = -1;
        } else {
            seen[j++] = arr[i]; 

    printf("Updated Array:\n");
    for(i = 0; i < 10; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}


