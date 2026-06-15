// fichero 47701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro47701;

Registro47701 crear_registro47701(int id) {
    Registro47701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
