#include <stdio.h>
int main(){
    int true_password=1234;
    int input_password=0;
    float balance=10000.0;
    float amount=0.0;
    int tries=0;

    int *true_pass_ptr=&true_password;
    int *input_pass_ptr=&input_password;
    float *balance_ptr=&balance;
    float *amount_ptr=&amount;
    int *tries_ptr=&tries;

    while(tries<3){
        printf("Welcome to the banking system");
        printf("please key in your password");
        scanf("%d",input_pass_ptr);

        if (*input_pass_ptr==*true_pass_ptr){
            printf("User Autehnticated");

            while (1){
                printf("Key in desires amount");
                scanf("%f", amount_ptr);

                if (*amount_ptr<=*balance_ptr){
                    *balance_ptr= *balance_ptr-*amount_ptr;
                    printf("Transaction Successfull oustanding balance is : $%.2f\n",*balance_ptr);
                    return 0;
                }
                if (*amount_ptr>balance){
                    printf("Insufficient balance to complete the transaction: Your balance is $%.2f\n",*balance_ptr);
                    printf("Please try again");
                }

            }
            
        }
    else{
        printf("incorrect password");
        tries ++;
        printf("Security alert : Attempts are %d/3\n\n", *tries_ptr);
    }   

}
printf("System locked : try gagain later"); 
return 0;
}


           