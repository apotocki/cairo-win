#include <pixman-config.h>
#include "../../packages/pixman/pixman/pixman-private.h"
#include <stdlib.h>

void pixman_constructor(void)
{
    global_implementation = _pixman_choose_implementation();
}

void pixman_destructor(void)
{
    pixman_implementation_t* imp = global_implementation;

    while (imp)
    {
        pixman_implementation_t* cur = imp;
        imp = imp->fallback;
        free(cur);
    }
}
