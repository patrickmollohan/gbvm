#pragma bank 255

// Scene: Dancefloor
// Sprites

#include "gbs_types.h"
#include "data/spritesheet_9.h"

const void __at(255) __bank_scene_6_sprites;

const far_ptr_t scene_6_sprites[] = {
  TO_FAR_PTR_T(spritesheet_9)
};
