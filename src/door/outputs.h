#pragma once
#include <door/motor.h>
#include <door/door.h>
#include "stdbool.h"

class Outputs
{
private:
    Motor* _motor;
    
public:
    Outputs(Motor* motor); // TODO: display could be added
    void set_outputs(const output_t out);
};
