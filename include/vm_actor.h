#ifndef _VM_ACTOR_H_INCLUDE
#define _VM_ACTOR_H_INCLUDE

#include <gbdk/platform.h>

#include "vm.h"
#include "gbs_types.h"

BANKREF_EXTERN(VM_ACTOR)

#define ACTOR_ATTR_H_FIRST    0x01
#define ACTOR_ATTR_CHECK_COLL_WALLS  0x02
#define ACTOR_ATTR_CHECK_COLL_ACTORS 0x20
#define ACTOR_ATTR_CHECK_COLL        ACTOR_ATTR_CHECK_COLL_WALLS | ACTOR_ATTR_CHECK_COLL_ACTORS
#define ACTOR_ATTR_DIAGONAL   0x04
#define ACTOR_ATTR_RELATIVE_SNAP_PX   0x08
#define ACTOR_ATTR_RELATIVE_SNAP_TILE 0x10
#define ACTOR_ATTR_RELATIVE           ACTOR_ATTR_RELATIVE_SNAP_PX | ACTOR_ATTR_RELATIVE_SNAP_TILE
void vm_actor_move_to(SCRIPT_CTX * THIS, INT16 idx) OLDCALL BANKED;

void vm_actor_move_cancel(SCRIPT_CTX * THIS, INT16 idx) OLDCALL BANKED;
void vm_actor_activate(SCRIPT_CTX * THIS, INT16 idx) OLDCALL BANKED;
void vm_actor_set_dir(SCRIPT_CTX * THIS, INT16 idx, direction_e dir) OLDCALL BANKED;
void vm_actor_deactivate(SCRIPT_CTX * THIS, INT16 idx) OLDCALL BANKED;
void vm_actor_set_anim(SCRIPT_CTX * THIS, INT16 idx, INT16 idx_anim) OLDCALL BANKED;
void vm_actor_set_pos(SCRIPT_CTX * THIS, INT16 idx) OLDCALL BANKED;
void vm_actor_emote(SCRIPT_CTX * THIS, INT16 idx, UBYTE emote_tiles_bank, const unsigned char *emote_tiles) OLDCALL BANKED;
void vm_actor_set_bounds(SCRIPT_CTX * THIS, INT16 idx, WORD left, WORD right, WORD top, WORD bottom) OLDCALL BANKED;
void vm_actor_set_spritesheet(SCRIPT_CTX * THIS, INT16 idx, UBYTE spritesheet_bank, const spritesheet_t *spritesheet) OLDCALL BANKED;
void vm_actor_replace_tile(SCRIPT_CTX * THIS, INT16 idx, UBYTE target_tile, UBYTE tileset_bank, const tileset_t * tileset, UBYTE start_tile, UBYTE length) OLDCALL BANKED;
void vm_actor_get_pos(SCRIPT_CTX * THIS, INT16 idx) OLDCALL BANKED;
void vm_actor_set_hidden(SCRIPT_CTX * THIS, INT16 idx, UBYTE hidden) OLDCALL BANKED;
void vm_actor_get_dir(SCRIPT_CTX * THIS, INT16 idx, INT16 dest) OLDCALL BANKED;
void vm_actor_get_angle(SCRIPT_CTX * THIS, INT16 idx, INT16 dest) OLDCALL BANKED;
void vm_actor_set_anim_tick(SCRIPT_CTX * THIS, INT16 idx, UBYTE speed) OLDCALL BANKED;
void vm_actor_set_move_speed(SCRIPT_CTX * THIS, INT16 idx, UBYTE speed) OLDCALL BANKED;

#define ACTOR_FLAG_PINNED       0x01
#define ACTOR_FLAG_HIDDEN       0x02
#define ACTOR_FLAG_ANIM_NOLOOP  0x04
#define ACTOR_FLAG_COLLISION    0x08
#define ACTOR_FLAG_PERSISTENT   0x10
void vm_actor_set_flags(SCRIPT_CTX * THIS, INT16 idx, UBYTE flags, UBYTE mask) OLDCALL BANKED;

void vm_actor_begin_update(SCRIPT_CTX * THIS, INT16 idx) OLDCALL BANKED;
void vm_actor_terminate_update(SCRIPT_CTX * THIS, INT16 idx) OLDCALL BANKED;
void vm_actor_set_anim_frame(SCRIPT_CTX * THIS, INT16 idx) OLDCALL BANKED;
void vm_actor_get_anim_frame(SCRIPT_CTX * THIS, INT16 idx) OLDCALL BANKED;
void vm_actor_set_anim_set(SCRIPT_CTX * THIS, INT16 idx, UWORD offset) OLDCALL BANKED;
void vm_actor_set_spritesheet_by_ref(SCRIPT_CTX * THIS, INT16 idxA, INT16 idxB) OLDCALL BANKED;

void vm_actor_get_bounds(SCRIPT_CTX * THIS, INT16 idx) OLDCALL BANKED;
void vm_actor_get_bounds_pos(SCRIPT_CTX * THIS, INT16 idx) OLDCALL BANKED;

#endif