#include <stdio.h>

int main() {
    FILE *file;
    int id;
    char name[100];
    char section[50];
    int choice = 1;

    file = fopen("student_records.txt", "a");

    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    while (choice == 1) {
        printf("Enter Student Number: ");
        scanf("%d", &id);

        getchar();

        printf("Enter Complete Name: ");
        fgets(name, sizeof(name), stdin);

        printf("Enter Section: ");
        fgets(section, sizeof(section), stdin);

        fprintf(file, "ID Number: %d\n", id);
        fprintf(file, "Complete Name: %s", name);
        fprintf(file, "Section: %s\n", section);

        printf("\nRecord added and saved successfully.\n");

        printf("\nAdd another student? (Enter 1 for Yes, 0 for No): ");
        scanf("%d", &choice);
        printf("\n");
    }

    fclose(file);
    printf("All student records have been saved.\n");

    return 0;
}
