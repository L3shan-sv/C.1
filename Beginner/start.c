#include <stdio.h>

int main(){
    int age=0;
    printf("Key in the age");
    scanf("%d", &age);

    if(age>=18){
        printf("Adult Grant acces\n");
    }
    else if(age>=14){
        printf(" this is a teen\n");
    }
    else {
        printf("this is a kid\n");
    }
    return 0;
}