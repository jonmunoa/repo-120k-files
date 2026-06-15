// fichero 10701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro10701;

Registro10701 crear_registro10701(int id) {
    Registro10701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
