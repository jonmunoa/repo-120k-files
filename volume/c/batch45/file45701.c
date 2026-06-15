// fichero 45701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro45701;

Registro45701 crear_registro45701(int id) {
    Registro45701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
