// fichero 15701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15701;

Registro15701 crear_registro15701(int id) {
    Registro15701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
