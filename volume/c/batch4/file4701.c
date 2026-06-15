// fichero 4701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4701;

Registro4701 crear_registro4701(int id) {
    Registro4701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
