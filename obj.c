#include "obj.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

static void __store_obj__(struct object *self, int store);
static void __print_obj__(struct object *self);
static void __destructer_obj__(struct object **self);

void __construct_obj__(struct object *self){
    self->store = (void*)&__store_obj__;
    self->print = (void*)&__print_obj__;
    self->destructer = (void*)&__destructer_obj__;
    printf("Address of object:%p\n", (void*)self);
    printf("Construction successful\n");
}

static void __store_obj__(struct object *self, int store){
    self->storage = store;
    printf("Address of Storage:%p\n", (void*)&self->storage);
    printf("Stored %d in Storage\n", self->storage);
    printf("Storage successful\n");
}

static void __print_obj__(struct object *self){
    printf("Storage:%d Address of storage:%p\n", self->storage, 
           (void*)&self->storage);
}

static void __destructer_obj__(struct object **self){
    free(*self);
    printf("Destruction successful\n");
}
