#include<stdio.h>
#include<string.h>

struct customer{
    int account_no;
    char name[20];
    float balance;
};

void print_customers(struct customer c[], int n);
int main(){
    struct customer c[3];
    int i;
    for(i=0; i<3; i++){
        printf("\nEnter customer %d details: \n", i+1);
        printf("Account No: ");
        scanf("%d", &c[i].account_no);
        printf("Name: ");
        scanf("%s", &c[i].name);
        printf("Balance: ");
        scanf("%f", &c[i].balance);
    }
    printf("\nCustomers whose balance is less than Rs 100: \n");
    print_customers(c, 3);
    
    return 0;
}

void print_customers(struct customer c[], int n){
    int i;
    for(i=0; i<n; i++){
        if(c[i].balance < 100){
            printf("\n%d \t%s", c[i].account_no, c[i].name);
        }
    }
}

