// fichero 6441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro6441;

Registro6441 crear_registro6441(int id) {
    Registro6441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
