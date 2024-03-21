
#include <stdio.h>
// Function to calculate the fine rate based on days overdue
int calculateFineRate(int daysOverdue) {
    if (daysOverdue <= 7) {
        return 20;
    } else if (daysOverdue <= 14) {
        return 50;
    } else {
        return 100;
    }
}

// Function to calculate the fine amount
int calculateFineAmount(int daysOverdue, int fineRate) {
    return daysOverdue * fineRate;
}

int main() {
    int bookID, dueDate, returnDate;
    printf("Enter Book ID: ");
    scanf("%d", &bookID);
    printf("Enter Due Date: ");
    scanf("%d", &dueDate);
    printf("Enter Return Date: ");
    scanf("%d", &returnDate);
    
    int daysOverdue = returnDate - dueDate;
    int fineRate = calculateFineRate(daysOverdue);
    int fineAmount = calculateFineAmount(daysOverdue, fineRate);
    
    printf("\nBook ID: %d\n", bookID);
    printf("Due Date: %d\n", dueDate);
    printf("Return Date: %d\n", returnDate);
    printf("Days Overdue: %d\n", daysOverdue);
}
