// fichero 17701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro17701;

Registro17701 crear_registro17701(int id) {
    Registro17701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
