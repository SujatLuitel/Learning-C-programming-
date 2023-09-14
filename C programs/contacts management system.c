#include <stdio.h>
#include <string.h>

struct Contact {
    char name[50];
    char phone[20];
    char email[50];
};

void addContact(struct Contact contacts[], int *count);
void displayContacts(struct Contact contacts[], int count);
void searchContact(struct Contact contacts[], int count);
void updateContact(struct Contact contacts[], int count);
void deleteContact(struct Contact contacts[], int *count);

int main() {
    struct Contact contacts[100];
    int option, count = 0;
    do {
        printf("\n--- Contact Management System ---\n");
        printf("1. Add a new contact\n");
        printf("2. Display all contacts\n");
        printf("3. Search for a contact\n");
        printf("4. Update a contact\n");
        printf("5. Delete a contact\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &option);
        switch(option) {
            case 1:
                addContact(contacts, &count);
                break;
            case 2:
                displayContacts(contacts, count);
                break;
            case 3:
                searchContact(contacts, count);
                break;
            case 4:
                updateContact(contacts, count);
                break;
            case 5:
                deleteContact(contacts, &count);
                break;
            case 6:
                printf("Exiting the program...\n");
                break;
            default:
                printf("Invalid option. Please try again.\n");
        }
    } while(option != 6);
    return 0;
}

void addContact(struct Contact contacts[], int *count) {
    printf("\n--- Add a new contact ---\n");
    printf("Enter name: ");
    scanf("%s", contacts[*count].name);
    printf("Enter phone number: ");
    scanf("%s", contacts[*count].phone);
    printf("Enter email: ");
    scanf("%s", contacts[*count].email);
    (*count)++;
    printf("Contact added successfully.\n");
}

void displayContacts(struct Contact contacts[], int count) {
    if(count == 0) {
        printf("No contacts found.\n");
        return;
    }
    printf("\n--- Displaying all contacts ---\n");
    for(int i=0; i<count; i++) {
        printf("%d. Name: %s\n", i+1, contacts[i].name);
        printf("   Phone: %s\n", contacts[i].phone);
        printf("   Email: %s\n", contacts[i].email);
    }
}

void searchContact(struct Contact contacts[], int count) {
    if(count == 0) {
        printf("No contacts found.\n");
        return;
    }
    printf("\n--- Search for a contact ---\n");
    char name[50];
    printf("Enter the name of the contact: ");
    scanf("%s", name);
    int found = 0;
    for(int i=0; i<count; i++) {
        if(strcmp(contacts[i].name, name) == 0) {
            printf("Contact found:\n");
            printf("Name: %s\n", contacts[i].name);
            printf("Phone: %s\n", contacts[i].phone);
            printf("Email: %s\n", contacts[i].email);
            found = 1;
            break;
        }
    }
    if(!found) {
        printf("Contact not found.\n");
    }
}

