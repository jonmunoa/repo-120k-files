// fichero 42337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42337;

Registro42337 crear_registro42337(int id) {
    Registro42337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
