// fichero 22269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22269;

Registro22269 crear_registro22269(int id) {
    Registro22269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
