#include <stdio.h>
#include <math.h>
typedef struct {
    int x;
    int y;
} location_t;

typedef struct {
    location_t location;
    int id;
} map_t;

void shift(map_t *p1);


int
main(int argc, char *argv[]) {
    map_t map = {{10, 15}, 1003173};
    
    printf("shift from (%d, %d)", map.location.x, map.location.y);
    shift(&map);
    printf("to from (%d, %d)", map.location.x, map.location.y);
    return 0;
}

void
shift(map_t *p1){
    p1->location.x += 1;
    p1->location.y += 1;
}