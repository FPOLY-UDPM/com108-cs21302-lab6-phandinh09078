/******************************************************************************
 * Họ và tên: [Phan như định]
 * MSSV:      [ps49566]
 * Lớp:       [cs108]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY
#include <stdio.h>

int main() {
    int n;

    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int arr[n];   // mảng động

    // Nhập mảng
    for(int i = 0; i < n; i++){
        printf("Nhap phan tu thu %d: ", i);
        scanf("%d", &arr[i]);
    }

    int sum = 0;
    int count = 0;

    // Tìm các số chia hết cho 3
    for(int i = 0; i < n; i++){
        if(arr[i] % 3 == 0){
            sum += arr[i];
            count++;
        }
    }

    // Kiểm tra tránh chia cho 0
    if(count == 0){
        printf("Khong co so nao chia het cho 3!");
    }else{
        float avg = (float)sum / count;
        printf("Trung binh cac so chia het cho 3 la: %.2f", avg);
    }

    return 0;
}
