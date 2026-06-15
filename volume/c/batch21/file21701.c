// fichero 21701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro21701;

Registro21701 crear_registro21701(int id) {
    Registro21701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
