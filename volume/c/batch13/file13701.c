// fichero 13701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13701;

Registro13701 crear_registro13701(int id) {
    Registro13701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
