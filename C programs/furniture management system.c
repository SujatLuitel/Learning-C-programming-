#include <stdio.h>
#include <string.h>

#define MAX_CUSTOMERS 100
#define MAX_SUPPLIERS 50
#define MAX_LENGTH 50

typedef struct {
    int id;
    char name[MAX_LENGTH];
    char address[MAX_LENGTH];
    char phone[MAX_LENGTH];
} Customer;

typedef struct {
    int id;
    char name[MAX_LENGTH];
    char address[MAX_LENGTH];
    char phone[MAX_LENGTH];
} Supplier;

int num_customers = 0;
Customer customers[MAX_CUSTOMERS];

int num_suppliers = 0;
Supplier suppliers[MAX_SUPPLIERS];

void addCustomer() {
    if (num_customers >= MAX_CUSTOMERS) {
        printf("Maximum number of customers reached.\n");
        return;
    }

    Customer customer;

    printf("Enter customer name: ");
    scanf("%s", customer.name);

    printf("Enter customer address: ");
    scanf("%s", customer.address);

    printf("Enter customer phone: ");
    scanf("%s", customer.phone);

    customer.id = num_customers + 1;

    customers[num_customers] = customer;
    num_customers++;

    printf("Customer added successfully.\n");
}

void addSupplier() {
    if (num_suppliers >= MAX_SUPPLIERS) {
        printf("Maximum number of suppliers reached.\n");
        return;
    }

    Supplier supplier;

    printf("Enter supplier name: ");
    scanf("%s", supplier.name);

    printf("Enter supplier address: ");
    scanf("%s", supplier.address);

    printf("Enter supplier phone: ");
    scanf("%s", supplier.phone);

    supplier.id = num_suppliers + 1;

    suppliers[num_suppliers] = supplier;
    num_suppliers++;

    printf("Supplier added successfully.\n");
}

void displayCustomers() {
    if (num_customers == 0) {
        printf("No customers found.\n");
        return;
    }

    printf("List of customers:\n");
    printf("------------------\n");

    for (int i = 0; i < num_customers; i++) {
        printf("ID: %d\n", customers[i].id);
        printf("Name: %s\n", customers[i].name);
        printf("Address: %s\n", customers[i].address);
        printf("Phone: %s\n", customers[i].phone);
        printf("------------------\n");
    }
}

void displaySuppliers() {
    if (num_suppliers == 0) {
        printf("No suppliers found.\n");
        return;
    }

    printf("List of suppliers:\n");
    printf("------------------\n");

    for (int i = 0; i < num_suppliers; i++) {
        printf("ID: %d\n", suppliers[i].id);
        printf("Name: %s\n", suppliers[i].name);
        printf("Address: %s\n", suppliers[i].address);
        printf("Phone: %s\n", suppliers[i].phone);
        printf("------------------\n");
    }
}

void searchCustomer() {
    if (num_customers == 0) {
        printf("No customers found.\n");
        return;
    }

    int id;
    printf("Enter customer ID: ");
    scanf("%d", &id);

    for (int i = 0; i < num_customers; i++) {
        if (customers[i].id == id) {
            printf("ID: %d\n", customers[i].id);
            printf("Name: %s\n", customers[i].name);
            printf("Address: %s\n", customers[i].address);
            printf("Phone: %s\n",customers[i].phone);
		}
		else{
			printf("Customer not found.\n");
		}
	}
	}
		




