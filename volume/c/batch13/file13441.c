// fichero 13441 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13441;

Registro13441 crear_registro13441(int id) {
    Registro13441 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
