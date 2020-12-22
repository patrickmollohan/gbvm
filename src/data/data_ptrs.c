#include "data/data_ptrs.h"
#include "data/scene_0.h"
#include "data/spritesheet_0.h"
#include "data/palette_0.h"

int start_scene_x = 0x0048;
int start_scene_y = 0x0058;
char start_scene_dir_x = 1;
char start_scene_dir_y = 0;
far_ptr_t start_scene = TO_FAR_PTR_T(scene_0);
far_ptr_t start_player_sprite = TO_FAR_PTR_T(spritesheet_0);
far_ptr_t start_player_palette = TO_FAR_PTR_T(palette_0);
unsigned char start_player_move_speed = 1;
unsigned char start_player_anim_speed = 3;
WORD plat_min_vel = 304;
WORD plat_walk_vel = 6400;
WORD plat_run_vel = 10496;
WORD plat_walk_acc = 152;
WORD plat_run_acc = 228;
WORD plat_dec = 208;
WORD plat_jump_vel = 16384;
WORD plat_grav = 1792;
WORD plat_hold_grav = 512;
WORD plat_max_fall_vel = 20000;
UBYTE topdown_grid = 8;
UBYTE fade_style = 0;
UBYTE *engine_fields_addr = &plat_min_vel;

unsigned char script_variables[500] = { 0 };
