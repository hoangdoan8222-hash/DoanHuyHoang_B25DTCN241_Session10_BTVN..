#include <stdio.h>

int main() {
    int n, value, i, count = 0;
    int arr[100]; 

    scanf("%d", &n); 

    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]); 
    }

    scanf("%d", &value); 

    for (i = 0; i < n; i++) {
        if (arr[i] == value) {
            count++;
        }
    }

    printf("%d", count); 
    return 0;
}

