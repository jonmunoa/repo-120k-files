// fichero 20701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro20701;

Registro20701 crear_registro20701(int id) {
    Registro20701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
