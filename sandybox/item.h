#ifndef ITEM_H
#define ITEM_H
#include "position.h"
#include "item_value.h"
class item
{
public:
    item(position, item_value);
    item(position, int);
    position getpos();
    void setpos(int, int, int, int);
    item_value getvalue();
    void setvalue(int, int, int, int);
private:
    position pos;
    item_value value;
};

#endif // ITEM_H
