// fichero 43337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43337;

Registro43337 crear_registro43337(int id) {
    Registro43337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
