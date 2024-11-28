#include <stdio.h>
int main() {
    int n;
    while(n<1){
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);
}
    int arr[n];
    for (int i = 0; i < n; i++) {
        while (1) {
            printf("Nhap phan tu %d (so le): ", i + 1);
            scanf("%d", &arr[i]);
            if (arr[i] % 2 != 0) {
                break;  
            } else {
                printf("Phan tu nhap vao phai la so le. Vui long nhap lai.\n");
            }
        }
    }
    printf("Mang da nhap: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

