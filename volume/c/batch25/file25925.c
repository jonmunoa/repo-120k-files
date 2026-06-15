// fichero 25925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro25925;

Registro25925 crear_registro25925(int id) {
    Registro25925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
