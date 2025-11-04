#include <stdio.h>

int main() {
    int a, b, x, y, r, ucln, bcnn;

    printf("Nhap hai so nguyen duong: ");
    scanf("%d %d", &a, &b);

    if (a <= 0 || b <= 0) {
        printf("Vui long nhap hai so nguyen duong!\n");
        return 0;
    }

    x = a;
    y = b;

    while (y != 0) {
        r = x % y;
        x = y;
        y = r;
    }
    ucln = x;

    bcnn = (a * b) / ucln;

    printf("Boi chung nho nhat (BCNN) cua %d va %d la: %d\n", a, b, bcnn);

    return 0;
}

