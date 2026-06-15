// fichero 34701 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro34701;

Registro34701 crear_registro34701(int id) {
    Registro34701 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
