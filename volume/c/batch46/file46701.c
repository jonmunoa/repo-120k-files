// fichero 46701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro46701;

Registro46701 crear_registro46701(int id) {
    Registro46701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
