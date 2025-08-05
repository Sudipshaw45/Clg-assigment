#include <stdio.h>
#include <string.h>

void reverseString(char *s) {
    int left = 0;
    int right = strlen(s) - 1;
    char temp;
        while (left < right) {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
}

int main() {
    char str[100];
    
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';
    
    reverseString(str);
    
    printf("Reversed string: %s\n", str);
    
    return 0;
}