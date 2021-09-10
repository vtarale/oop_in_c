#ifndef OBJ
#define OBJ

#define BUFFSIZE 1024

struct object{
    int storage;
    int (*store)(struct object *self, int store);
    int (*print)(struct object *self);
    int (*destructer)(struct object **self);
};

void __construct_obj__(struct object *self);

#endif
