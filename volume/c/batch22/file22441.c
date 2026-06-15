// fichero 22441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22441;

Registro22441 crear_registro22441(int id) {
    Registro22441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
