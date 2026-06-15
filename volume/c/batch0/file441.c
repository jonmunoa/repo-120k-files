// fichero 441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro441;

Registro441 crear_registro441(int id) {
    Registro441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
