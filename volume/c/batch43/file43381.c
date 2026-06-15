// fichero 43381 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43381;

Registro43381 crear_registro43381(int id) {
    Registro43381 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
