// fichero 39701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39701;

Registro39701 crear_registro39701(int id) {
    Registro39701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
