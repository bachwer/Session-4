#include <stdio.h>

int main() {
        //declare variable year
         int year;
        //input year
        printf("Enter year: ");
        scanf("%d", &year);
        // caculation and print results
        if(year < 1000 || year > 9999){
            printf(" invalid !!!");
        }else if(year % 4 == 0 && year % 100 !=0 || year % 400 == 0){
            printf("la nam nhuan");
        }else{
            printf("khong phai nam nhuan");
        }
        
    //end
    return 0;
}
