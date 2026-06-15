// fichero 2701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro2701;

Registro2701 crear_registro2701(int id) {
    Registro2701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
