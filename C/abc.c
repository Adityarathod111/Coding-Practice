#include <stdio.h>
#include <string.h>

void decode_message(char *s, int n) {
    int used[200] = {0}; // Keeps track of used characters
    char result[201];    // Stores the decoded message
    int index = 0;       // Index for result

    while (index < n) {
        // Step 1-3: Select smallest characters in increasing order
        char last_added = 0;
        for (int i = 0; i < n; i++) {
            if (!used[i] && (last_added == 0 || s[i] > last_added)) {
                last_added = s[i];
                used[i] = 1;
                result[index++] = s[i];
            }
        }

        // Step 4-6: Select largest characters in decreasing order
        last_added = 127; // Highest possible ASCII value for comparison
        for (int i = n - 1; i >= 0; i--) {
            if (!used[i] && (last_added == 127 || s[i] < last_added)) {
                last_added = s[i];
                used[i] = 1;
                result[index++] = s[i];
            }
        }
    }
    
    result[index] = '\0'; // Null-terminate the string
    printf("%s\n", result);
}

int main() {
    int n;
    char s[201];

    // Input
    scanf("%d", &n);
    scanf("%s", s);

    // Decode the message
    decode_message(s, n);

    return 0;
}
