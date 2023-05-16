#include <stdio.h>

int main() {
    char name[50], seat_no[15];
    int marks[4], total = 0, i;
    float percentage;
    
    printf("Enter name of Student ? ");
    fgets(name, 50, stdin);
    printf("Enter Seat No? ");
    fgets(seat_no, 15, stdin);
    
    for (i = 0; i < 4; i++) {
        printf("Enter marks of subject %d? ", i+1);
        scanf("%d", &marks[i]);
        total += marks[i];
    }
    
    percentage = (float) total / 4.0;
    
    printf("\nM A R K S H E E T\n");
    printf("Name : %sSeat No : %s", name, seat_no);
    printf("------------------------------------------------------------\n");
    printf("Subjects\tMarks\n");
    printf("-----------------------------------------------------\n");
    
    for (i = 0; i < 4; i++) {
        printf("%d. ", i+1);
        switch (i) {
            case 0:
                printf("English\t\t");
                break;
            case 1:
                printf("Basic Electronics\t");
                break;
            case 2:
                printf("Mathematics\t");
                break;
            case 3:
                printf("Computer Programming\t");
                break;
        }
        printf("%d\n", marks[i]);
    }
    
    printf("---------------------------------------------------------------\n");
    printf("Total : %d\tPercentage%% : %.2f\n", total, percentage);
    
    return 0;
}