// fichero 22337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22337;

Registro22337 crear_registro22337(int id) {
    Registro22337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
