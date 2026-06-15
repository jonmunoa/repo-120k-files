// fichero 36441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro36441;

Registro36441 crear_registro36441(int id) {
    Registro36441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
