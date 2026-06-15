// fichero 4269 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro4269;

Registro4269 crear_registro4269(int id) {
    Registro4269 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
