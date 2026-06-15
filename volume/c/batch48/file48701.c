// fichero 48701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48701;

Registro48701 crear_registro48701(int id) {
    Registro48701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
