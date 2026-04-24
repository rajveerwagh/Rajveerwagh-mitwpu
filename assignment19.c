#include <stdio.h>
#include <string.h>

#define MAX 100

struct Employee {
    char name[50];
    char designation[50];
    char gender;
    char doj[20];
    float salary;
};

// Function to count male and female employees
void countGender(struct Employee emp[], int n) {
    int male = 0, female = 0;

    for(int i = 0; i < n; i++) {
        if(emp[i].gender == 'M' || emp[i].gender == 'm')
            male++;
        else if(emp[i].gender == 'F' || emp[i].gender == 'f')
            female++;
    }

    printf("Male Employees: %d\n", male);
    printf("Female Employees: %d\n", female);
}

// Function to display employees with salary > 10000
void highSalary(struct Employee emp[], int n) {
    printf("\nEmployees with salary > 10000:\n");
    for(int i = 0; i < n; i++) {
        if(emp[i].salary > 10000) {
            printf("%s\n", emp[i].name);
        }
    }
}

// Function to display employees with designation "Asst Manager"
void asstManager(struct Employee emp[], int n) {
    printf("\nEmployees with designation 'Asst Manager':\n");
    for(int i = 0; i < n; i++) {
        if(strcmp(emp[i].designation, "Asst Manager") == 0) {
            printf("%s\n", emp[i].name);
        }
    }
}

int main() {
    struct Employee emp[MAX];
    int n;

    printf("Enter number of employees: ");
    scanf("%d", &n);

    if(n <= 0 || n > MAX) {
        printf("Invalid number!\n");
        return 0;
    }

    for(int i = 0; i < n; i++) {
        printf("\nEnter details for Employee %d:\n", i + 1);

        printf("Name: ");
        scanf("%s", emp[i].name);

        printf("Designation: ");
        scanf("%s", emp[i].designation);

        printf("Gender (M/F): ");
        scanf(" %c", &emp[i].gender);

        printf("Date of Joining: ");
        scanf("%s", emp[i].doj);

        printf("Salary: ");
        scanf("%f", &emp[i].salary);
    }

    printf("\nTotal Employees: %d\n", n);

    countGender(emp, n);
    highSalary(emp, n);
    asstManager(emp, n);

    return 0;
}
