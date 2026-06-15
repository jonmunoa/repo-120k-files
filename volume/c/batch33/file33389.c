// fichero 33389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33389;

Registro33389 crear_registro33389(int id) {
    Registro33389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
