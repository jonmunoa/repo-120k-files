// fichero 16269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro16269;

Registro16269 crear_registro16269(int id) {
    Registro16269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
