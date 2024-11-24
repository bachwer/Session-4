#include <stdio.h>

int main() {
    // 1.Mảng chứa thông tin các tháng
    const char* mon[12] = {
        "Tháng 1: 31 ngày",
        "Tháng 2: 28 hoặc 29ngày (năm nhuận)",
        "Tháng 3: 31 ngày",
        "Tháng 4: 30 ngày",
        "Tháng 5: 31 ngày",
        "Tháng 6: 30 ngày",
        "Tháng 7: 31 ngày",
        "Tháng 8: 31 ngày",
        "Tháng 9: 30 ngày",
        "Tháng 10: 31 ngày",
        "Tháng 11: 30 ngày",
        "Tháng 12: 31 ngày"
    };
    //2.khai báo biến i
    int i;
    //3.sử lý điều kiện của tháng 
    do{
    printf("Enter your month: ");
    scanf("%d", &i); 
    if(i > 12 || i < 1){
        printf("invalid\n");
    }
    }while(i > 12 || i < 1);
    // trừ i để khớp với mảng 1.
    i--;
    //In ra kết quả
    printf("%s\n", mon[i]);
    // kết thúc 
    return 0;
}