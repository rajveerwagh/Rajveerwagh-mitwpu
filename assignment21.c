#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *source, *target;
    char ch;

    source = fopen("source.txt", "r");
    if (source == NULL) {
        printf("Error opening source file!\n");
        return 0;
    }

    target = fopen("target.txt", "w");
    if (target == NULL) {
        printf("Error opening target file!\n");
        fclose(source);
        return 0;
    }

    // Copy contents
    while ((ch = fgetc(source)) != EOF) {
        fputc(ch, target);
    }

    printf("File copied successfully!\n");

    fclose(source);
    fclose(target);

    return 0;
}
