// fichero 43253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43253;

Registro43253 crear_registro43253(int id) {
    Registro43253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
