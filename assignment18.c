#include <stdio.h>
#include <string.h>

// Function to reverse string
void reverse(char str[]) {
    int len = strlen(str);
    char temp;
    for(int i = 0; i < len / 2; i++) {
        temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

// Function to check palindrome
int isPalindrome(char str[]) {
    int len = strlen(str);
    for(int i = 0; i < len / 2; i++) {
        if(str[i] != str[len - i - 1])
            return 0;
    }
    return 1;
}

int main() {
    char str1[100], str2[100], temp[100];

    printf("Enter a string: ");
    scanf("%s", str1);

    // Length
    printf("Length = %lu\n", strlen(str1));

    // Reverse
    strcpy(temp, str1);
    reverse(temp);
    printf("Reversed string = %s\n", temp);

    // Palindrome
    if(isPalindrome(str1))
        printf("Palindrome: YES\n");
    else
        printf("Palindrome: NO\n");

    // Equality check
    printf("Enter another string for comparison: ");
    scanf("%s", str2);

    if(strcmp(str1, str2) == 0)
        printf("Strings are Equal\n");
    else
        printf("Strings are NOT Equal\n");

    // Substring check
    if(strstr(str1, str2) != NULL)
        printf("'%s' is a substring of '%s'\n", str2, str1);
    else
        printf("'%s' is NOT a substring of '%s'\n", str2, str1);

    return 0;
}
