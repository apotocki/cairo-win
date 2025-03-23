#include "cairoint.h"

extern void pixman_destructor(void);

cairo_public void
pixman_reset_static_data(void)
{
    pixman_destructor();
}

