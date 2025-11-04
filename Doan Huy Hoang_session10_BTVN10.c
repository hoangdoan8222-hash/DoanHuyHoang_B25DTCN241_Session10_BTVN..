#include <stdio.h>

int main() {
    int n;
    printf("Nhap mot so nguyen: ");
    scanf("%d", &n);

    if (n < 0) n = -n;

    int dao = 0, temp = n;

    while (temp > 0) {
        dao = dao * 10 + temp % 10;
        temp /= 10;
    }

    printf("Cac chu so: ");
    while (dao > 0) {
        printf("%d ", dao % 10);
        dao /= 10;
    }

    if (n == 0)
        printf("0");

    printf("\n");
    return 0;
}

