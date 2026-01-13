/******************************************************************************
 * Họ và tên: [Huỳnh Gia Hoàng]
 * MSSV:      [PS48269]
 * Lớp:       [CS21301]
 *****************************************************************************/

 // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ 
// Input: Nhập vào từ bàn phím 2 số  
// Output: Hiển thị ra màn hình tổng, hiệu 2 số 

#include <stdio.h>
int main () {
    int x = 0, y = 0, tong, hieu;
    printf ("Nhap x: ");
    scanf ("%d",&x);
    printf ("Nhap y: ");
    scanf ("%d",&y);
    tong = x + y;
    hieu = x - y;
    printf ("Tong = %d\n", tong);
    printf ("Hieu = %d\n", hieu);
    return 0;
}



