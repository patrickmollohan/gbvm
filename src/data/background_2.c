#pragma bank 255

// Background: underground

#include "data/data_types.h"
#include "data/tileset_0.h"

const void __at(255) __bank_background_2;

const struct background_t background_2 = {
  .width = 32,
  .height = 32,
  .tileset = TO_FAR_PTR_T(tileset_0),
  .tiles = {
    32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,76,77,77,77,77,77,77,77,77,77,77,77,77,77,77,77,77,77,77,77,77,77,77,77,77,77,77,77,77,78,32,32,79,80,81,81,81,80,81,80,81,80,81,80,81,80,80,81,80,81,80,80,81,80,81,80,80,81,80,81,80,82,32,32,79,83,84,84,84,83,84,83,84,83,84,83,84,83,83,84,83,84,83,83,84,83,84,83,83,84,83,84,83,82,32,32,79,85,86,87,88,89,85,85,86,85,86,87,85,86,87,88,89,85,86,85,86,87,85,86,87,88,89,85,86,82,32,32,79,32,32,99,100,99,100,99,100,99,100,99,100,99,100,99,100,99,100,99,100,99,100,99,100,99,100,32,32,82,32,32,79,99,100,101,102,101,102,101,102,101,102,101,102,101,102,101,102,101,102,101,102,101,102,101,102,101,102,99,100,82,32,32,79,101,102,66,66,66,66,66,66,66,66,66,66,66,103,104,66,66,66,66,66,66,66,103,104,66,66,101,102,82,32,32,79,99,100,66,66,66,66,66,66,66,66,66,66,66,105,106,66,66,66,66,66,66,66,105,106,66,66,99,100,82,32,32,79,101,102,66,66,103,104,66,66,66,66,66,66,66,107,108,66,66,66,66,66,66,66,66,66,66,66,101,102,82,32,32,79,99,100,66,66,105,106,66,66,66,66,66,66,66,109,110,66,66,66,66,66,66,66,66,66,66,66,99,100,82,32,32,79,101,102,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,101,102,82,32,32,79,99,100,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,99,100,82,32,32,79,101,102,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,101,102,82,32,32,79,99,100,66,66,66,66,66,66,66,66,66,66,66,66,66,103,104,66,66,66,66,66,66,66,66,66,99,100,82,32,32,79,101,102,66,66,66,66,66,66,66,66,66,66,66,66,66,105,106,66,66,66,66,66,66,66,66,66,101,102,82,32,32,79,99,100,66,66,66,66,103,104,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,99,100,82,32,32,79,101,102,66,66,66,66,105,106,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,66,101,102,82,32,32,79,99,100,99,100,99,100,99,100,99,100,99,100,99,100,99,100,99,100,99,100,99,100,32,32,99,100,99,100,82,32,32,79,101,102,101,102,101,102,101,102,101,102,101,102,101,102,101,102,101,102,101,102,101,102,32,32,101,102,101,102,82,32,32,79,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,82,32,32,79,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,82,32,32,79,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,99,100,99,100,32,32,99,100,99,100,32,32,32,82,32,32,79,32,32,32,32,32,32,32,32,32,32,32,32,32,99,100,101,102,101,102,32,32,101,102,101,102,32,32,32,82,32,32,79,32,32,32,32,32,32,32,32,32,32,32,32,32,101,102,99,100,32,32,32,32,32,32,99,100,32,32,32,82,32,32,79,32,32,32,32,32,32,32,32,32,32,32,32,32,99,100,101,102,32,32,32,32,32,32,101,102,32,99,100,82,32,32,79,32,32,32,32,32,32,32,32,32,32,32,32,32,101,102,99,100,32,32,32,32,32,32,99,100,32,101,102,82,32,32,79,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,101,102,32,32,32,32,32,32,101,102,32,32,32,82,32,32,79,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,99,100,32,32,32,32,32,32,99,100,32,99,100,82,32,32,79,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,101,102,32,32,32,32,32,32,101,102,32,101,102,82,32,32,90,91,91,91,91,91,91,91,91,91,91,91,91,91,91,91,91,91,91,92,93,94,95,91,91,91,91,91,91,96,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,32,79,97,98,82,32,32,32,32,32,32,32,32
  }
};
