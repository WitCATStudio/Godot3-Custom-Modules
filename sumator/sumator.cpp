#include "sumator.h"

void Sumator::add(int value) {

    count+=value;
}

void Sumator::reset() {

    count=0;
}

int Sumator::get_total() const {

    return count;
}

void Sumator::_bind_methods() {

    ClassDB::bind_method("add",&Sumator::add);
    ClassDB::bind_method("reset",&Sumator::reset);
    ClassDB::bind_method("get_total",&Sumator::get_total);
}

Sumator::Sumator() {
    count=0;
}
