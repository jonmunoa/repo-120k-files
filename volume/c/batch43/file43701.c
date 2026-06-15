// fichero 43701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43701;

Registro43701 crear_registro43701(int id) {
    Registro43701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
