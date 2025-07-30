#include <stdio.h>

int main(void) {
    int gs1, groupid, pubcode, itemnum, check;

    printf("Enter ISBN: ");
    scanf("%d-%d-%d-%d-%d", &gs1, &groupid, &pubcode, &itemnum, &check);

    printf("GS1 prefix: %d\n", gs1);
    printf("Group identifier: %d\n", groupid);
    printf("Published code: %d\n", pubcode);
    printf("Item number: %d\n", itemnum);
    printf("Check digit: %d\n", check);

    return 0;
}
