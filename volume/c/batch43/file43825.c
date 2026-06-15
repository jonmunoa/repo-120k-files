// fichero 43825 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43825;

Registro43825 crear_registro43825(int id) {
    Registro43825 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
