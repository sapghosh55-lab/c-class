#include <stdio.h>

int main() {
    int days, months, remaining_days;

    // Input number of days
    printf("Enter number of days: ");
    scanf("%d", &days);

    // Conversion (assuming 1 month = 30 days)
    months = days / 30;
    remaining_days = days % 30;

    // Display result
    printf("%d days = %d month(s) and %d day(s)\n", days, months, remaining_days);

    return 0;
}
