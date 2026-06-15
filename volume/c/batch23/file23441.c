// fichero 23441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro23441;

Registro23441 crear_registro23441(int id) {
    Registro23441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
