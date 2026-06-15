// fichero 23701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23701;

Registro23701 crear_registro23701(int id) {
    Registro23701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
