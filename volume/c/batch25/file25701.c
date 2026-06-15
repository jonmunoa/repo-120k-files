// fichero 25701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25701;

Registro25701 crear_registro25701(int id) {
    Registro25701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
