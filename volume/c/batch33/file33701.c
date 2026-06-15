// fichero 33701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33701;

Registro33701 crear_registro33701(int id) {
    Registro33701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
