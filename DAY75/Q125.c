/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.*/
#include <stdio.h>
#include <string.h>

int main() {
    FILE *fp;
    char filename[100];
    char text[500]; 

    printf("Enter the filename: ");
    scanf("%99s", filename);

    fp = fopen(filename, "a");
    if (fp == NULL) {
        printf("Error: Could not open file.\n");
        return 1;
    }

    getchar();
    
    printf("Enter text to append: ");
    fgets(text, sizeof(text), stdin);

    size_t len = strlen(text);
    if (len > 0 && text[len - 1] == '\n') {
        text[len - 1] = '\0';
    }

    fprintf(fp, "%s\n", text);

    fclose(fp);

    printf("File updated successfully with appended text.\n");
    return 0;
}
