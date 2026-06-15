// fichero 24701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro24701;

Registro24701 crear_registro24701(int id) {
    Registro24701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
