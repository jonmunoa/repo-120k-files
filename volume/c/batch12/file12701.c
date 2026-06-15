// fichero 12701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro12701;

Registro12701 crear_registro12701(int id) {
    Registro12701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
