// fichero 15297 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15297;

Registro15297 crear_registro15297(int id) {
    Registro15297 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
