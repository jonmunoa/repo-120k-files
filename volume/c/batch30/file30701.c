// fichero 30701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30701;

Registro30701 crear_registro30701(int id) {
    Registro30701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
