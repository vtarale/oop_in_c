#include "obj.h"
#include <stdlib.h>

int main(void){
    struct object *ob;
    ob = malloc(sizeof(struct object));

    __construct_obj__(ob);
    ob->store(ob, 1);
    ob->print(ob);
    ob->destructer(&ob);

    return 0;
}
