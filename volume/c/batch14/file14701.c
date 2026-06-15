// fichero 14701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro14701;

Registro14701 crear_registro14701(int id) {
    Registro14701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
