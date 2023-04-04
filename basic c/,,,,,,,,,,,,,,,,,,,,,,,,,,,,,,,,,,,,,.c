#include <stdio.h>

int main() {
    int n, my_mark, marks[100], less_count = 0, more_count = 0;

    // Input number of friends and my mark
    scanf("%d", &n);
    scanf("%d", &my_mark);

    // Input marks of other friends and count less and more marks
    for (int i = 0; i < n-1; i++) {
        scanf("%d", &marks[i]);
        if (marks[i] < my_mark) {
            less_count++;
        } else {
            more_count++;
        }
    }

    // Output the counts
    printf("%d\n%d", more_count, less_count);

    return 0;
}
