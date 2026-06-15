// fichero 32253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32253;

Registro32253 crear_registro32253(int id) {
    Registro32253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
