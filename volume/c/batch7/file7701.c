// fichero 7701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro7701;

Registro7701 crear_registro7701(int id) {
    Registro7701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
