// fichero 23525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23525;

Registro23525 crear_registro23525(int id) {
    Registro23525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
