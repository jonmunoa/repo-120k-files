// fichero 13337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13337;

Registro13337 crear_registro13337(int id) {
    Registro13337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
