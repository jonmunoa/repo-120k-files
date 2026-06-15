// fichero 18701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18701;

Registro18701 crear_registro18701(int id) {
    Registro18701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
