// fichero 6701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6701;

Registro6701 crear_registro6701(int id) {
    Registro6701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
