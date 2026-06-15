// fichero 15253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15253;

Registro15253 crear_registro15253(int id) {
    Registro15253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
