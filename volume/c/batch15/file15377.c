// fichero 15377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15377;

Registro15377 crear_registro15377(int id) {
    Registro15377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
