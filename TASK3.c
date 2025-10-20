#include <stdio.h>

int main() {
    int pass[10], fail[10];
    int p = 0, f = 0, mark,i;
    float avgPass = 0, avgFail = 0;

    printf("Enter marks for up to 10 students (-1 to stop):\n");

    for( i = 0; i < 10; i++) {
        printf("Enter mark for student %d: ", i + 1);
        scanf("%d", &mark);

        if(mark == -1) {
            break; 
        }

        if(mark >= 5 && mark <= 10) {
            pass[p++] = mark;
            avgPass += mark;
        } else if(mark >= 0 && mark < 5) {
            fail[f++] = mark;
            avgFail += mark;
        } else {
            printf("Invalid mark. Please enter between 0-10 or -1 to stop.\n");
        }
    }

    printf("\nPass Marks: ");
    for(i = 0; i < p; i++) {
        printf("%d ", pass[i]);
    }

    printf("\nFail Marks: ");
    for( i = 0; i < f; i++) {
        printf("%d ", fail[i]);
    }

    if(p > 0) avgPass /= p;
    if(f > 0) avgFail /= f;

    printf("\nAverage Pass Marks: %.2f", avgPass);
    printf("\nAverage Fail Marks: %.2f", avgFail);

    return 0;
}

