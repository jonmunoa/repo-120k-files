// fichero 15413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15413;

Registro15413 crear_registro15413(int id) {
    Registro15413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
