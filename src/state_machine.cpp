#include "state_machine.hpp"
#include <godot_cpp/core/class_db.hpp>

using namespace godot;

StateMachine::StateMachine()
{
}

StateMachine::~StateMachine()
{
}

void StateMachine::_bind_methods()
{
    ClassDB::add_property("StateMachine", PropertyInfo(Variant::OBJECT, "active_state"), "");
}

void StateMachine::_ready()
{
}

void StateMachine::_process(double delta)
{
}

void StateMachine::_physics_process(double delta)
{
}

State StateMachine::get_active_state() const
{
    return active_state;
}

void StateMachine::set_active_state(const State pstate)
{
    active_state = pstate;
}