// fichero 4441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4441;

Registro4441 crear_registro4441(int id) {
    Registro4441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
