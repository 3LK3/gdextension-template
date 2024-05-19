#ifndef GDSTATEMACHINE_STATE_MACHINE_HPP
#define GDSTATEMACHINE_STATE_MACHINE_HPP

#include <godot_cpp/classes/node.hpp>
#include "state.hpp"

namespace godot
{
    class StateMachine : public Node
    {
        GDCLASS(StateMachine, Node)

    protected:
        static void _bind_methods();

    private:
        State active_state;

    public:
        StateMachine();
        ~StateMachine();

        void _ready();
        void _process(double delta);
        void _physics_process(double delta);

        State get_active_state() const;
        void set_active_state(const State state);
    };
}

#endif