// fichero 32701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32701;

Registro32701 crear_registro32701(int id) {
    Registro32701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
