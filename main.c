#include <stdio.h>
#include <stdlib.h>

int main()
{
    int nam, sinh, tuoi;
   /* int nam = 2024;
    int sinh = 2009;
    int tuoi = nam - sinh;
    //tính tuổi
    // công thức: năm hiện tại - năm sinh
    printf("nam nay ban %d tuoi\n", tuoi);
    // bài này hard-code
    //không tối ưu
    //năm sinh năm hiện tại bị cố định không phù hợp cho người dùng
    //không có nhập từ bàn phím*/


    printf("nhap nam hien tai: ");
    scanf("%d/n", &nam);
    printf("nhap nam sinh: ");
    scanf("%d/n", &sinh);
    tuoi = nam - sinh;
    printf("nam nay ban %d tuoi", tuoi);
    // cach viet moi thuan tien, tien dung hon

    return 0;
}
