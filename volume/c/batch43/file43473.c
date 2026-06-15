// fichero 43473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43473;

Registro43473 crear_registro43473(int id) {
    Registro43473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
