// Khai báo thý vi?n chu?n
#include <avr\io.h>
// Ð?nh ngh?a h?ng s? FRE = 8, là xung nh?p c?a h? th?ng (tính b?ng MHz)
#define FRE 8
// Khai báo file thý vi?n riêng
#include "thu_vien_rieng.h"
// L?p tr?nh hàm main()
int main()
{
// G?i hàm INIT() trong file thu_vien_rieng.h ð? kh?i t?o
INIT();
// G?i hàm PORT() trong file thu_vien_rieng.h ð? ði?u khi?n LED
PORT();
// L?nh return luôn xu?t hi?n ? cu?i hàm main()
return 0;
}
