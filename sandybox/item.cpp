#include "item.h"

item::item(position _pos, int type):pos(_pos), value(0, 0, 0, 0)
{

    switch (type) {
       case 1: value.setitem_value(1, -1, 1, 1);break;
       case 2: value.setitem_value(-1, -1, -1, 1);break;
       case 3: value.setitem_value(-1, 1, 1, -1);break;
       case 4: value.setitem_value(-1, 1, 1, -1);break;
       case 5: value.setitem_value(1, -1, 1, -1);break;
    }
}

item::item(position _pos, item_value _value):pos(_pos), value(_value){

}

position item::getpos(){
    return pos;
}

item_value item::getvalue(){
    return value;
}

void item::setpos(int a, int b, int c, int d){
   pos.setpos(a, b, c, d);
}

void item::setvalue(int a, int b, int c, int d){
    value.setitem_value(a, b, c, d);
}
