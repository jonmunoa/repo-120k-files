// fichero 18473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro18473;

Registro18473 crear_registro18473(int id) {
    Registro18473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
