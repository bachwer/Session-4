#include <stdio.h>

int main() {
    //khai báo biến 3 biến số
    int num1, num2, num3;
    printf("Enter number 1: ");
    scanf("%d", &num1);
    printf("Enter number 2: ");
    scanf("%d", &num2);
    printf("Enter number 3: ");
    scanf("%d", &num3);
    // sư lý điều kiện
    if(num1 > num3 && num3 > num2){
        printf("true");
    }else if(num1 < num3 && num3 < num2){
        printf("true");
    }else{
        printf("false");
    }
    
    //kêt thuc
    return 0;
}