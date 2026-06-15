// fichero 48337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48337;

Registro48337 crear_registro48337(int id) {
    Registro48337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
