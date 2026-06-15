// fichero 11701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro11701;

Registro11701 crear_registro11701(int id) {
    Registro11701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
