/******************************************************************************
 * Họ và tên: [phan như định]
 * MSSV:      [ps49566]
 * Lớp:       [cs108]
 *****************************************************************************/

//  BÀI 4: TÍNH BÌNH PHƯƠNG CÁC PHẦN TỬ TRONG MẢNG 2 CHIỀU 
//  Input: Nhập vào từ bàn phím 1 ma trận các số nguyên. Mảng gồm n hàng, m cột 
//  Output: Xuất ra màn hình ma trận bình phương 

// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main() {
    int n, m;

    printf("Nhap so hang cua ma tran: ");
    scanf("%d", &n);
    printf("Nhap so cot cua ma tran: ");
    scanf("%d", &m);

    int arr[n][m];   // ma trận 2 chiều

    // Nhập ma trận
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("Nhap phan tu tai vi tri [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }

    // Tính bình phương các phần tử
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            arr[i][j] = arr[i][j] * arr[i][j];
        }
    }

    // Xuất ma trận bình phương
    printf("Ma tran sau khi tinh binh phuong la:\n");
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}