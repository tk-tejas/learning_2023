#include <stdio.h>

struct DigitRange {
    int smallest;
    int largest;
};

struct DigitRange find_min_max_digits(int n) {
    struct DigitRange range;
    range.smallest = 9;
    range.largest = 0;

    while (n > 0) {
        int digit = n % 10;
        if (digit < range.smallest) {
            range.smallest = digit;
        }
        if (digit > range.largest) {
            range.largest = digit;
        }
        n /= 10;
    }

    return range;
}

int main() {
    int num;
    printf("Enter the number of elements: ");
    scanf("%d", &num);

    int arr[num];
    for (int i = 0; i < num; i++) {
        printf("Enter your number %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < num; i++) {
        struct DigitRange range = find_min_max_digits(arr[i]);
        printf("Smallest and largest digits in %d are: %d, %d\n", arr[i], range.smallest, range.largest);
    }

    return 0;
}
