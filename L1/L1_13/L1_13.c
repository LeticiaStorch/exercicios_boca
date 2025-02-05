#include <stdio.h>

int main() {
    int p, item, ult;
    scanf("%d %d", &p, &item);

    if (p >= item) {
        ult = item;
    } else {
        int rest = item % p;
        if (rest > 0) {
            ult = rest;
        } else
            ult = p;
    }
    printf("RESP:%d\n", ult);
}