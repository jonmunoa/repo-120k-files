// fichero 5701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro5701;

Registro5701 crear_registro5701(int id) {
    Registro5701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
