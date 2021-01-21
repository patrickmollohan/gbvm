.include "vm.i"
.include "data/game_globals.i"
.include "macro.i"

.globl ___bank_scene_1, _scene_1

.area _CODE_255

ACTOR = -4

___bank_script_s2t0_interact = 255
.globl ___bank_script_s2t0_interact

_script_s2t0_interact::
        VM_LOCK

        ; Local Actor
        VM_PUSH                 0
        VM_PUSH                 0
        VM_PUSH                 0
        VM_PUSH                 0

        ; Load Scene
        VM_FADE_OUT             2
        VM_SET_CONST            ACTOR, 0
        VM_SET_CONST            ^/(ACTOR + 1)/, 2688
        VM_SET_CONST            ^/(ACTOR + 2)/, 3712
        VM_ACTOR_SET_POS        ACTOR
        VM_ACTOR_SET_DIR        ACTOR, 0, .DIR_UP
        VM_RAISE                EXCEPTION_CHANGE_SCENE, 3
            IMPORT_FAR_PTR_DATA _scene_1
        ; Stop Script
        VM_STOP
