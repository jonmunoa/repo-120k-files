// fichero 32337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32337;

Registro32337 crear_registro32337(int id) {
    Registro32337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
