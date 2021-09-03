.include "vm.i"
.include "data/game_globals.i"

.globl b_wait_frames, _wait_frames

.area _CODE_255


___bank_script_s7a13_update = 255
.globl ___bank_script_s7a13_update

_script_s7a13_update::
1$:
        ; Call Script: Enemy Ship Movement Diagonal Bottom To Top
        VM_PUSH_CONST           14 ; Actor .ARG2
        VM_CALL_FAR             ___bank_script_enemy_ship_movement_diagonal_bottom_to_top, _script_enemy_ship_movement_diagonal_bottom_to_top
        VM_POP                  1

        ; Wait 1 Frame
        VM_PUSH_CONST           1
        VM_INVOKE               b_wait_frames, _wait_frames, 1, .ARG0

        VM_JUMP                 1$
        ; Stop Script
        VM_STOP
