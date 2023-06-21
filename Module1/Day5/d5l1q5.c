#include <stdio.h>

struct Point {
    int x;
    int y;
};

void swapPoints(struct Point* p1, struct Point* p2) {
    int tempX = p1->x;
    int tempY = p1->y;
    p1->x = p2->x;
    p1->y = p2->y;
    p2->x = tempX;
    p2->y = tempY;
}

int main() {
    // Create two structures
    struct Point point1 = { 10, 11 };
    struct Point point2 = { 12, 13 };


    printf("Before swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    // Swap the fields using pointers
    swapPoints(&point1, &point2);

    printf("\nAfter swapping:\n");
    printf("Point 1: (%d, %d)\n", point1.x, point1.y);
    printf("Point 2: (%d, %d)\n", point2.x, point2.y);

    return 0;
}

