#ifndef SANDBOX_H
#define SANDBOX_H
#include "item.h"
#include <vector>
class sandbox
{
public:
    sandbox(int, int);
    item_value calc();
    void addnewitem(position, int);
    void addnewitem(position, item_value);
    void deleteitem(int);
    void modifyitem(int, position, int);
    void modifyitem(int, position, item_value);
private:
    std::vector<item> item_list;
    int a, b, c, d;
    int x, y;
};

#endif // SANDBOX_H
