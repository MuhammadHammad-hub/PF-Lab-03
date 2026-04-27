#include<stdio.h>
#include<string.h>
struct Order{
    int orderID;
    char customerName[50];
    char productName[50];
    int quantity;
    float unitPrice;
    char status[20];
};
float computeTotal(struct Order o){
    return o.quantity * o.unitPrice;
}

void filterByStatus(struct Order orders[], int n, char status[]){
    printf("\nOrders with status %s:\n", status);
    for(int i=0; i<n; i++){
        if(strcmp(orders[i].status, status) == 0){
            printf("Order ID: %d | Customer: %s | Product: %s\n",
                   orders[i].orderID,
                   orders[i].customerName,
                   orders[i].productName);
        }
    }
}
int main(){
    struct Order o[4];

    for(int i=0; i<4; i++){
        printf("\nEnter order %d details\n", i+1);

        printf("Order ID: ");
        scanf("%d", &o[i].orderID);

        printf("Customer Name: ");
        scanf(" %[^\n]", o[i].customerName);

        printf("Product Name: ");
        scanf(" %[^\n]", o[i].productName);

        printf("Quantity: ");
        scanf("%d", &o[i].quantity);

        printf("Unit Price: ");
        scanf("%f", &o[i].unitPrice);

        printf("Status: ");
        scanf("%s", o[i].status);
    }

    printf("\n--- Bills ---\n");
    for(int i=0; i<4; i++){
        printf("Order %d Total: %.2f\n", o[i].orderID, computeTotal(o[i]));
    }

    char status[20];
    printf("\nEnter status to filter: ");
    scanf("%s", status);

    filterByStatus(o, 4, status);
    return 0;
}