// fichero 27701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro27701;

Registro27701 crear_registro27701(int id) {
    Registro27701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
