#ifndef {{def_name}}_REGISTER_TYPES_HPP
#define {{def_name}}_REGISTER_TYPES_HPP

#include <godot_cpp/core/class_db.hpp>

using namespace godot;

void initialize_{{name}}_module(ModuleInitializationLevel p_level);
void uninitialize_{{name}}_module(ModuleInitializationLevel p_level);

#endif