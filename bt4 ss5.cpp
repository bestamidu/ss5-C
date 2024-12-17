#include <stdio.h>

int main() {
    int n;

    printf("Nhap so muon tinh: ");
    scanf("%d", &n);

    while (n >= 1 && n <= 10) {
        printf("Bang cuu chuong la:\n");
        
        for (int i = 1; i <= 10; i++) {
            printf("%d * %d = %d\n", n, i, n * i);
        }
        if (n == 1) {
         break;
}

    }

    return 0;
}
