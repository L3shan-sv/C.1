#include <stdio.h>
int main(){
    float balance= 10000.00;
    float amount= 0;
    int tries= 0;

    float *balance_ptr=&balance;
    float *amaount_ptr=&amount;
    int *tries_ptr=&tries;

    while( tries<3){
        printf("Please Input the desired amount");
        scanf("%f", &amount);
    }
    if(amount<=balance){
        float diff= balance -amount;
        printf("Transaction successfull oustanding balance is : $%.2f\n", diff);
        return 0;
    }
    else if(amount>balance){
        printf("Insufficient funds to complete transaction\n");
        tries++;

    }
    else{
        printf("too many unsuccessfull tries try later\n");
    }
}