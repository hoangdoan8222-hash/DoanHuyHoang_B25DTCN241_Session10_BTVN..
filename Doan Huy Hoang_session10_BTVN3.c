#include <stdio.h>

int main() {
    int n, value, found = 0;
    int arr[100];
    int i;  // ? khai báo i ? dây, không khai báo trong for

    if (scanf("%d", &n) != 1) return 0;

    for (i = 0; i < n; i++) { 
        if (scanf("%d", &arr[i]) != 1) return 0;
    }

    if (scanf("%d", &value) != 1) return 0;

    for (i = 0; i < n; i++) {  
        if (arr[i] == value) {
            found = 1;
            break;
        }
    }

    if (found)
        printf("Tim thay\n");
    else
        printf("Khong tim thay\n");

    return 0;
}

