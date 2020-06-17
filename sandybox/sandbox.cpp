#include "sandbox.h"

sandbox::sandbox(int _x, int  _y)
{
    x = _x; y = _y;
}

item_value sandbox::calc(){
    item_value sum(0, 0, 0, 0);
    for(int i=0; i<item_list.size(); i++){
        sum = sum + item_list[i].getvalue();
    }
    return sum;
}

void sandbox::addnewitem(position pos, int type){
    item_list.push_back(item(pos, type));
}

void sandbox::addnewitem(position pos,  item_value value){
    item_list.push_back(item(pos, value));
}

void sandbox::deleteitem(int index){
    item_list[index].setvalue(0, 0, 0, 0);
}

void sandbox::modifyitem(int index, position pos, int type){
    item_list[index]= item(pos, type);
}

void sandbox::modifyitem(int index, position pos, item_value value){
    item_list[index]= item(pos, value);
}
