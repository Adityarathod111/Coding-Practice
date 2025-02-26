#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);

    if (n <= 0) return 0; // Edge case for invalid input

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int max_length = 1, current_length = 1; // At least one element exists
    int trend = 0; // 0 = undefined, 1 = increasing, -1 = decreasing

    for (int i = 1; i < n; i++) {
        if (arr[i] > arr[i - 1]) { 
            if (trend == -1) current_length = 1; // Reset if changing trend
            trend = 1;
            current_length++;
        } 
        else if (arr[i] < arr[i - 1]) { 
            if (trend == 1) current_length = 1; // Reset if changing trend
            trend = -1;
            current_length++;
        } 
        else { 
            trend = 0;
            current_length = 1; // Reset on equal values
        }

        if (current_length > max_length) {
            max_length = current_length;
        }
    }

    printf("%d\n", max_length);
    return 0;
}
