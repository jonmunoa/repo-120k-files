// fichero 29701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro29701;

Registro29701 crear_registro29701(int id) {
    Registro29701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
