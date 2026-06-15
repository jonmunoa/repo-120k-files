// fichero 33337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33337;

Registro33337 crear_registro33337(int id) {
    Registro33337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
