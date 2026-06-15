// fichero 36701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36701;

Registro36701 crear_registro36701(int id) {
    Registro36701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
