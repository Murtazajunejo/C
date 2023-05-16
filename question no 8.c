#include <stdio.h>

int main() {
    int seconds, hours, minutes, remaining_seconds;
    printf("Input Seconds? ");
    scanf("%d", &seconds);
    hours = seconds / 3600;
    minutes = (seconds % 3600) / 60;
    remaining_seconds = seconds % 60;
    printf("Hours Minutes Seconds\n");
    printf("%d %d %d\n", hours, minutes, remaining_seconds);
    return 0;
}