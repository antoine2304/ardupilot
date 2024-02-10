// needs to be modified for deer mode.

#include "Copter.h"

#if MODE_GUIDED_ENABLED == ENABLED

/*
 * Init and run calls for deer flight mode
 * Get inspired from other modes :-)
 */


// init - initialise guided controller
bool ModeDeer::init(bool ignore_checks)
{

    return true;
}

// run - runs the guided controller
// should be called at 100hz or more
void ModeDeer::run()
{
    
}

#endif