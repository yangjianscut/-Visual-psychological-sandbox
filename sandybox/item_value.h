#ifndef ITEM_VALUE_H
#define ITEM_VALUE_H


class item_value
{
public:
    item_value(int, int, int, int);
    void setitem_value(int, int, int, int);
    item_value operator + (item_value);
    item_value operator - (item_value);
    int a, b, c, d;
};

#endif // ITEM_VALUE_H
