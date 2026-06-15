// fichero 9701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro9701;

Registro9701 crear_registro9701(int id) {
    Registro9701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
