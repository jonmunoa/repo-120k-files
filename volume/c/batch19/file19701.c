// fichero 19701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro19701;

Registro19701 crear_registro19701(int id) {
    Registro19701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
