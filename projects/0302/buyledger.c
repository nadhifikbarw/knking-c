#include <stdio.h>

int main(void) {
    int item_num;
    float price_per_unit;
    int dd, mm, yy;

    printf("Enter item number: ");
    scanf("%d", &item_num);

    printf("Enter unit price: ");
    scanf("%f", &price_per_unit);

    printf("Enter purchase date (mm/dd/yyyy): ");
    scanf("%d/%d/%d", &mm, &dd, &yy);

    printf("\n");
    printf("%-16s%-16s%s\n","Item", "Unit", "Purchase");
    printf("%-16s%-16s%s\n", "", "Price", "Date");
    printf("%-16d$ %4.2f\t%2d/%2d/%4d", item_num, price_per_unit, mm, dd, yy);
    return 0;
}
