/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>
int main () {
    int ban_kinh = 0, pi = 3.14, dien_tich;
    printf ("Nhap ban kinh: ");
    scanf ("%d",&ban_kinh);
    dien_tich = pi * ban_kinh * ban_kinh;
    printf ("Chu vi = %d\n", 2 * pi * ban_kinh);
    printf ("Dien tich = %d\n", dien_tich);
    return 0;
}