/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>
int main () {
    int dai = 0, rong = 0;
    printf ("Nhap dai: ");
    scanf ("%d",&dai);
    printf ("Nhap rong: ");
    scanf ("%d",&rong);
    printf ("Chu vi = %d\n", (dai + rong) * 2);
    printf ("Dien tich = %d\n", dai * rong);
    return 0;
}


