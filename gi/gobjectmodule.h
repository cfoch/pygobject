#ifndef _PYGOBJECT_GOBJECTMODULE_H_
#define _PYGOBJECT_GOBJECTMODULE_H_


#include "pygobject-internal.h"

int           pygobject_constructv (PyGObject       *self,
                                    guint            n_props,
                                    const gchar     *prop_names[],
                                    const GValue     values[]);

#endif /*_PYGOBJECT_GOBJECTMODULE_H_*/
