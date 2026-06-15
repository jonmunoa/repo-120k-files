// fichero 48473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro48473;

Registro48473 crear_registro48473(int id) {
    Registro48473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
