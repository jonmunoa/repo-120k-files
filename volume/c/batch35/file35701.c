// fichero 35701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro35701;

Registro35701 crear_registro35701(int id) {
    Registro35701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
