// fichero 1701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro1701;

Registro1701 crear_registro1701(int id) {
    Registro1701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
