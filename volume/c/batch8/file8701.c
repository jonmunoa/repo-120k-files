// fichero 8701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro8701;

Registro8701 crear_registro8701(int id) {
    Registro8701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
