#include <stdio.h>
#include <string.h>

#define MAX_RECORDS 100
#define MAX_NAME_LENGTH 50
#define MAX_POLICY_LENGTH 20

struct record {
    char name[MAX_NAME_LENGTH];
    char policy[MAX_POLICY_LENGTH];
};

void addRecord(struct record records[], int *numRecords);
void searchRecord(struct record records[], int numRecords, char searchName[]);
void printRecords(struct record records[], int numRecords);

int main() {
    struct record records[MAX_RECORDS];
    int numRecords = 0;
    char searchName[MAX_NAME_LENGTH];

    int choice;
    do {
        printf("\n-- Insurance Record Management System --\n");
        printf("1. Add Record\n");
        printf("2. Search Record\n");
        printf("3. Print All Records\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addRecord(records, &numRecords);
                break;
            case 2:
                printf("Enter name to search: ");
                scanf("%s", searchName);
                searchRecord(records, numRecords, searchName);
                break;
            case 3:
                printRecords(records, numRecords);
                break;
            case 4:
                printf("Exiting program...");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 4);

    return 0;
}

void addRecord(struct record records[], int *numRecords) {
    if (*numRecords == MAX_RECORDS) {
        printf("Maximum number of records reached. Cannot add more.\n");
        return;
    }

    printf("Enter name: ");
    scanf("%s", records[*numRecords].name);
    printf("Enter policy number: ");
    scanf("%s", records[*numRecords].policy);

    (*numRecords)++;
    printf("Record added successfully.\n");
}

void searchRecord(struct record records[], int numRecords, char searchName[]) {
    int i;
    for (i = 0; i < numRecords; i++) {
        if (strcmp(records[i].name, searchName) == 0) {
            printf("Name: %s\n", records[i].name);
            printf("Policy Number: %s\n", records[i].policy);
            return;
        }
    }
    printf("Record not found.\n");
}

void printRecords(struct record records[], int numRecords) {
    int i;
    if (numRecords == 0) {
        printf("No records found.\n");
        return;
    }
    printf("%-20s %-20s\n", "Name", "Policy Number");
    for (i = 0; i < numRecords; i++) {
        printf("%-20s %-20s\n", records[i].name, records[i].policy);
    }
}

