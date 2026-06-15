// fichero 13213 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13213;

Registro13213 crear_registro13213(int id) {
    Registro13213 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
