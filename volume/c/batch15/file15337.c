// fichero 15337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15337;

Registro15337 crear_registro15337(int id) {
    Registro15337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
