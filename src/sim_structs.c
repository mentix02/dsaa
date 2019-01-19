#include <math.h>
#include <stdio.h>

struct Point {
    float x, y;
};

float distance(struct Point p1, struct Point p2) {

    int x = (p1.x - p2.x);
    x = x * x;

    int y = (p1.y - p2.y);
    y = y * y;

    return sqrt(x + y);
}

void print_point(struct Point p) {
    printf("(%f, %f)", p.x, p.y);
}

int main() {
    float x1, y1;
    float x2, y2;

    // get value for first point
    printf("Enter value for x1 : ");
    scanf("%f", &x1);
    printf("Enter value for y1 : ");
    scanf("%f", &y1);

    // enter value for second point
    printf("Enter value for x2 : ");
    scanf("%f", &x2);
    printf("Enter value for y2 : ");
    scanf("%f", &y2);

    struct Point p1 = {x1, y1};
    struct Point p2 = {x2, y2};

    printf("distance between ");
    print_point(p1);
    printf(" and ");
    print_point(p2);
    printf(" is %f units\n", distance(p1, p2));

    return 0;
    
}
