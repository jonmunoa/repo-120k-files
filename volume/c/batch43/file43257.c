// fichero 43257 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43257;

Registro43257 crear_registro43257(int id) {
    Registro43257 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
