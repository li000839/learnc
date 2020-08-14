#include <stdio.h>
#include <math.h>

typedef struct {
    double x;
    double y;
} vector_t;

double shift(vector_t *p1, vector_t *p2);


int
main(int argc, char *argv[]) {
    vector_t a, b;
    printf("Enter two points: ");
    scanf("(%lf,%lf) (%lf,%lf)", &a.x, &a.y, &b.x, &b.y);
    printf("shift (%.1lf, %.1lf) and (%.1lf, %.1lf)",\
    a.x, a.y, b.x, b.y);
    shift(&a,&b);
    printf("to (%.1lf, %.1lf) and (%.1lf, %.1lf)",\
    a.x, a.y, b.x, b.y);
    return 0;
}

double
shift(vector_t *p1, vector_t *p2){
    p1->x += 1;
    p2->x += 1;
    return 0;
}