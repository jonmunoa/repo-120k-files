// fichero 37701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro37701;

Registro37701 crear_registro37701(int id) {
    Registro37701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
