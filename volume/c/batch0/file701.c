// fichero 701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro701;

Registro701 crear_registro701(int id) {
    Registro701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
