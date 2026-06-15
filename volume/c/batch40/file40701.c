// fichero 40701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro40701;

Registro40701 crear_registro40701(int id) {
    Registro40701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
