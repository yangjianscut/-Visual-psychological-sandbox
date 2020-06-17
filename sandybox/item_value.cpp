#include "item_value.h"

item_value::item_value(int _a, int _b, int _c, int _d)
{
    a = _a;
    b = _b;
    c = _c;
    d = _d;
}

void item_value::setitem_value(int _a, int _b, int _c, int _d)
{
    a = _a;
    b = _b;
    c = _c;
    d = _d;
}

item_value item_value::operator+(item_value e){
    return item_value(a+e.a, b+e.b, c+e.c, d+e.d);
}

item_value item_value::operator-(item_value e){
    return item_value(a-e.a, b-e.b, c-e.c, d-e.d);
}
