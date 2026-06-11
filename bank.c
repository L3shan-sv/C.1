#include <stdio.h>
int main(){
    float balance=10000.00;
    int input_amount=0;
    float amount=0.00;

    printf(" key in desired amount\n");
    scanf("%d",&input_amount);

    amount=(float)input_amount;


    float fee = amount * 0.03;
    float total_amount = amount+ fee;

    if(total_amount<= balance){
        float diff= balance - total_amount;
        printf("Transaction was succesful Outsatnding balance is : $%.2f\n", diff);
    }
    else if (total_amount>balance){
        printf(" Insufficient amount to process the withdrawal\n");
    }
    else{
        printf("key in an actual number\n");
    }
    return 0;

}