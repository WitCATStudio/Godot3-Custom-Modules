#ifndef SUMATOR_H
#define SUMATOR_H

#include "reference.h"

class Sumator : public Reference {
    GDCLASS(Sumator,Reference);

    int count;

protected:
    static void _bind_methods();

public:
    void add(int value);
    void reset();
    int get_total() const;

    Sumator();
};

#endif
