#ifndef GDSTATEMACHINE_STATE_MACHINE_HPP
#define GDSTATEMACHINE_STATE_MACHINE_HPP

#include <godot_cpp/classes/node.hpp>

namespace godot
{
    class {{class_name}} : public Node
    {
        GDCLASS({{class_name}}, Node)

    protected:
        static void _bind_methods();

    public:
        {{class_name}}();
        ~{{class_name}}();

        void _ready();
        void _process(double delta);
        void _physics_process(double delta);
    };
}

#endif