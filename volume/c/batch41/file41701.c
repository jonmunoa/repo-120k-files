// fichero 41701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro41701;

Registro41701 crear_registro41701(int id) {
    Registro41701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
