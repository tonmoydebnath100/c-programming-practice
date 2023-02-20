#include <stdio.h>
#include <stdlib.h>


struct coordinate {
    int x;
    int y;
};

struct points {
    struct coordinate Pt1;
    struct coordinate Pt2;
    struct coordinate Pt3;
    struct coordinate Pt4;
};


int Manhattan_height_width(struct points p) {
    return (abs(p.Pt1.x - p.Pt2.x) + abs(p.Pt1.y - p.Pt2.y));
}


int Manhattan_base_length(struct points p) {
    return (abs(p.Pt2.x - p.Pt4.x) + abs(p.Pt2.y - p.Pt4.y));
}


int Manhattan_diagonal(struct points p) {
    return (abs(p.Pt1.x - p.Pt3.x) + abs(p.Pt1.y - p.Pt3.y));
}


int rectangleArea(int *length, int *width) {
    return ((*length) * (*width));
}


float triangleArea(int base, int height) {
    return (base*height)/2;
}
int main() {
    struct points p;

    p.Pt1.x = 3;
    p.Pt1.y = 8;

    p.Pt3.x = 14;
    p.Pt3.y = 2;

    p.Pt2.x = p.Pt1.x;
    p.Pt2.y = p.Pt3.y;

    p.Pt4.x = p.Pt3.x;
    p.Pt4.y = p.Pt1.y;

    int height_or_width = Manhattan_height_width(p);
    int base_or_length = Manhattan_base_length(p);
    int diagonal = Manhattan_diagonal(p);


    printf("Manhattan distance between Points P1 and P2 = %d\n", height_or_width);
    printf("Manhattan distance between Points P2 and P4 = %d\n", base_or_length);
    printf("Manhattan distance between Points P1 and P3 = %d\n", diagonal);
    printf("Area of rectangle P1P2P3P4 = %d\n", rectangleArea(&base_or_length, &height_or_width));
    printf("Area of triangle P1P2P3 = %.2f\n", triangleArea(base_or_length, height_or_width));


    return 0;
}
