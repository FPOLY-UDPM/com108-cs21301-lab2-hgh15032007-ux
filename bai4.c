/******************************************************************************
 * Họ và tên: [ĐIỀN TÊN TẠI ĐÂY]
 * MSSV:      [ĐIỀN MSSV TẠI ĐÂY]
 * Lớp:       [ĐIỀN LỚP TẠI ĐÂY]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>
int main () {
    int toan = 0, ly = 0, hoa = 0;
    printf ("Nhap diem Toan: ");
    scanf ("%d",&toan);
    printf ("Nhap diem Ly: ");
    scanf ("%d",&ly);
    printf ("Nhap diem Hoa: ");
    scanf ("%d",&hoa);
    printf ("Diem trung binh = %d\n", (toan * 3 + ly * 2 + hoa * 1) / 6);
    return 0;
}
