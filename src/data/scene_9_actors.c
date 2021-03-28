#pragma bank 255

// Scene: Scene 10
// Actors

#include "gbs_types.h"
#include "data/spritesheet_0.h"
#include "data/script_s2a0_interact.h"
#include "data/script_s9a0_interact.h"

const void __at(255) __bank_scene_9_actors;

const struct actor_t scene_9_actors[] = {
  {
    // Actor 1,
    .pos = {
      .x = 102 * 16,
      .y = 124 * 16,
    },
    .dir = DIR_DOWN,
    .bounds = {
      .left = 0,
      .bottom = 7,
      .right = 15,
      .top = -8
    },
    .sprite = TO_FAR_PTR_T(spritesheet_0),
    .palette = 0,
    .move_speed = 1,
    .anim_tick = 7,
    .frame = 0,
    .frame_start = 0,
    .frame_end = 0,
    .pinned = FALSE,
    .collision_group = COLLISION_GROUP_NONE,
    .collision_enabled = TRUE,
    .script = TO_FAR_PTR_T(script_s9a0_interact),
  }
};
