// fichero 46337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46337;

Registro46337 crear_registro46337(int id) {
    Registro46337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
