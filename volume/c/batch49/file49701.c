// fichero 49701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro49701;

Registro49701 crear_registro49701(int id) {
    Registro49701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
