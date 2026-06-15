// fichero 15441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15441;

Registro15441 crear_registro15441(int id) {
    Registro15441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
