
#include <stdio.h>
    int main(){
        //declare variable ..
        int kwh, kwhLast, electricityBill, totalCost;
        //input kwh and kwhLast
        printf("Moi nhap so dien ban dau: ");
        scanf("%d", &kwh);
        printf("Moi nhap so dien hien tai: ");
        scanf("%d", &kwhLast);
        //processing conditions
        if (kwh < 0 || kwhLast  < kwh) {
        printf("Số điện không hợp lệ!\n");
            return 1;
        }
        //calculaion total kwh
        electricityBill = kwhLast - kwh;
        printf("so dien tieu thu la: %d kwh\n", electricityBill);
        
        //processing calculaion totalCost
        if(electricityBill <= 50){
            printf("%d.000 vnd", electricityBill * 10);
        }else if(electricityBill <= 100){
            totalCost = (50 * 10) + (electricityBill - 50) * 15;
        }else if(electricityBill <= 150){
            totalCost = (50 * 10) + (50 * 15) + (electricityBill - 100) * 20;
        }else if(electricityBill <= 200){
             totalCost = (50 * 10) + (50 * 15) + (50 * 20) + (electricityBill - 150) * 25;
        }else{
         totalCost = (50 * 10) + (50 * 15) + (50 * 20) + (50 * 25) + (electricityBill - 200) * 30;
        } 
        //output totalCost
        printf("Tong tien la: %d.00vnd", totalCost);
        //end
        return 0;
    }
