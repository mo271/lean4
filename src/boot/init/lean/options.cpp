// Lean compiler output
// Module: init.lean.options
// Imports: init.lean.kvmap
#include "runtime/object.h"
#include "runtime/apply.h"
#include "runtime/io.h"
#include "kernel/builtin.h"
typedef lean::object obj;
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wunused-parameter"
#pragma clang diagnostic ignored "-Wunused-label"
#endif
obj* _l_s4_lean_s7_options_s2_mk;
obj* _l_s4_lean_s7_options;
obj* _init__l_s4_lean_s7_options() {
_start:
{
obj* x_0; 
x_0 = lean::box(0);
lean::inc(x_0);
return x_0;
}
}
obj* _init__l_s4_lean_s7_options_s2_mk() {
_start:
{
obj* x_0; 
x_0 = lean::alloc_cnstr(0, 0, 0);
;
return x_0;
}
}
void _l_initialize__l_s4_init_s4_lean_s5_kvmap();
static bool _G_initialized = false;
void _l_initialize__l_s4_init_s4_lean_s7_options() {
 if (_G_initialized) return;
 _G_initialized = true;
 _l_initialize__l_s4_init_s4_lean_s5_kvmap();
 _l_s4_lean_s7_options = _init__l_s4_lean_s7_options();
 _l_s4_lean_s7_options_s2_mk = _init__l_s4_lean_s7_options_s2_mk();
}
