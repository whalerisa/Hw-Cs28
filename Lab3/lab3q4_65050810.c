#include <stdio.h>
int main() {
    int count = 0;
    int total = 0;

    while(1) {
        int a;
        printf("Enter a positive integer : ");
        scanf("%d", &a);
        if (a <= 0) break;
        count += a;
        total += 1;
    }

    printf("addition = %d average = %d\n", count, count / total);
    return 0;
}