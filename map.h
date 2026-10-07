#include <stdbool.h>

typedef struct {
  int id;
  int width;
  int height;
} Map;

typedef struct {
  int id;
  char name[50];
  bool walkable;
} Tile;
