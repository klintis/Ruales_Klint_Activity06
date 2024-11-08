#include <stdio.h>
#include <ctype.h>

int main(){
    char username[16];
    int age;
    float salary;

    printf("Enter username: \n");
    scanf("%15s", username);

    for (int i = 0; username[i] != '\0'; i++){
        if (!isalnum(username[i])){
            printf("Error: Username must be alphanumeric.\n");
            return 1;
        }
    }
    printf("Enter age: \n");
    scanf("%d", &age);

    if (age < 18 || age > 60){
        printf("Error: Age must be between 18 and 60 years old\n");
            return 1;
    }
    printf("Enter salary: \n");
    scanf("%f", &salary);

    printf("\nOutput:\n");
    printf("Username\tAge\tSalary\n");
    printf("%s\t%d\t%f\n", username, age, salary);

    return 0;
}
