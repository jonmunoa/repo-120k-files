// fichero 42701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro42701;

Registro42701 crear_registro42701(int id) {
    Registro42701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
