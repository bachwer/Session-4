#include <stdio.h>

int main() {
    //declare variable and input
     int a, b, c;
        printf("Enter edge triangle a: ");
        scanf("%d", &a);
        printf("Enter edge triangle b: ");
        scanf("%d", &b);
        printf("Enter edge triangle c: ");
        scanf("%d", &c);
    //processing condition
        if(a <= 0 || b <= 0 || c <= 0){
            printf(" invalid !!");
            return 1;
        }
    // calculation and printf results
        if(a + b > c && b + c > a && c + a > b){
            printf("Là 3 cạnh tam giác");
        }else{
              printf("Không phải Là 3 cạnh tam giác");
        }
    return 0;
}
