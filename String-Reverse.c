// String Reverse Program
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[50];
    int i, len;
    char temp;

    // Input string
    printf("Enter the String: ");
    fgets(str1, 50, stdin);

    // New line remove
    str1[strcspn(str1, "\n")] = '\0';

    // Length find
    len = strlen(str1);
    printf("The Length Of String:%d\n",len);

    // Reverse logic
    for (i = 0; i < len / 2; i++)
    {
        temp = str1[i];
        str1[i] = str1[len - i - 1];
        str1[len - i - 1] = temp;
    }

    // Output
    printf("After Reverse: %s", str1);

    return 0;
}
