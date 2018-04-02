#include "debug.h"

/*
 * define the debug level of this file,
 * please see 'debug.h' for detail info
 */
DEBUG_SET_LEVEL(DEBUG_LEVEL_ERR);

int main(void) {
    ERR("This is a error message"); 
    INFO("This is a info message"); 
    DEBUG("This is a debug message"); 

    ASSERT();
    return 0;
}
