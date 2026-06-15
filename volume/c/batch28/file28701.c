// fichero 28701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28701;

Registro28701 crear_registro28701(int id) {
    Registro28701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
