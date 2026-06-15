// fichero 16701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16701;

Registro16701 crear_registro16701(int id) {
    Registro16701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
