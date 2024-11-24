#include <stdio.h>

int main(){
    //declare variable number
    int number;
    //input number
    printf("Enter your number: ");
    scanf("%d", &number);

    //processing calculation and print results
    if(number % 3 == 0 && number % 5 == 0){
        printf("%d divisible by 3 and 5", number);
    }else if(number % 3 == 0){
         printf("%d divisible by 3\n", number);
         printf("Not divisible by 5");
    }else if(number % 5 == 0){
         printf("%d divisible by 5\n", number);
         printf("Not divisible by 3");
    }else{
        printf("Not divisible by 3 and 5");
    }
    //end
    return 0;
}
