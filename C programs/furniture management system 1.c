#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Define structs to hold supplier and customer details
struct Supplier {
    char name[50];
    char address[100];
    char phone[15];
};

struct Customer {
    char name[50];
    char address[100];
    char phone[15];
};

// Declare global variables and data structures here as needed
struct Supplier suppliers[50];  // Array to store supplier details
struct Customer customers[50];  // Array to store customer details
int num_suppliers = 0;          // Variable to keep track of number of suppliers added
int num_customers = 0;          // Variable to keep track of number of customers added

// Function to add supplier details
void add_supplier()
{
    // Check if the array is already full
    if (num_suppliers == 50) {
        printf("Error: Maximum number of suppliers reached\n");
        return;
    }
    
    // Prompt the user to enter supplier details
    printf("Enter supplier name: ");
    scanf("%s", suppliers[num_suppliers].name);
    
    printf("Enter supplier address: ");
    scanf("%s", suppliers[num_suppliers].address);
    
    printf("Enter supplier phone number: ");
    scanf("%s", suppliers[num_suppliers].phone);
    
    // Increment the number of suppliers added
    num_suppliers++;
    
    printf("Supplier added successfully!\n");
}

// Function to display all supplier details
void display_suppliers()
{
    // Check if any suppliers have been added yet
    if (num_suppliers == 0) {
        printf("No suppliers found\n");
        return;
    }
    
    printf("Supplier Details:\n");
    
    // Loop through the array and print each supplier's details
    for (int i = 0; i < num_suppliers; i++) {
        printf("Name: %s\n", suppliers[i].name);
        printf("Address: %s\n", suppliers[i].address);
        printf("Phone: %s\n", suppliers[i].phone);
        printf("\n");
    }
}

// Function to add customer details
void add_customer()
{
    // Check if the array is already full
    if (num_customers == 50) {
        printf("Error: Maximum number of customers reached\n");
        return;
    }
    
    // Prompt the user to enter customer details
    printf("Enter customer name: ");
    scanf("%s", customers[num_customers].name);
    
    printf("Enter customer address: ");
    scanf("%s", customers[num_customers].address);
    
    printf("Enter customer phone number: ");
    scanf("%s", customers[num_customers].phone);
    
    // Increment the number of customers added
    num_customers++;
    
    printf("Customer added successfully!\n");
}

// Function to display all customer details
void display_customers()
{
    // Check if any customers have been added yet
    if (num_customers == 0) {
        printf("No customers found\n");
        return;
    }
    
    printf("Customer Details:\n");
    
    // Loop through the array and print each customer's details
    for (int i = 0; i < num_customers; i++) {
        printf("Name: %s\n", customers[i].name);
        printf("Address: %s\n", customers[i].address);
        printf("Phone: %s\n", customers[i].phone);
        printf("\n");
    }
}
// Main function
int main()
{
    int option, count=0;
    
    while (1) {
        // Display menu options
        printf("\nMenu:\n");
        printf("1. Add supplier details\n");
        printf("2. Display supplier details\n");
        printf("3. Add customer details\n");
        printf("4. Display customer details\n");
        printf("5. Exit\n");
        printf("Select an option: ");
        scanf("%d", &option);
        
        switch (option) {
            case 1:
                add_supplier();     // Call function to add supplier details
                break;
            case 2:
                display_suppliers(); 		 // Call function to display supplier details
                break;
            case 3:
                add_customer();				// Call function to add customer details
                break;
            case 4:
                display_customers();		// Call function to display customer details
                break;
            case 5:
                printf("Exiting program...\n");  // Exit the program
                exit(0);
                break;
            default:
                printf("Invalid input\n");  // Handle invalid input
                break;
        }
    }
    
    return 0;
}
