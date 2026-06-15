// fichero 23337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23337;

Registro23337 crear_registro23337(int id) {
    Registro23337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
