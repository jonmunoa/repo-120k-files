// fichero 45337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45337;

Registro45337 crear_registro45337(int id) {
    Registro45337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
