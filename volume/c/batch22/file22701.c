// fichero 22701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22701;

Registro22701 crear_registro22701(int id) {
    Registro22701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
