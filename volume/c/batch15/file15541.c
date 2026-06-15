// fichero 15541 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15541;

Registro15541 crear_registro15541(int id) {
    Registro15541 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
