// fichero 13233 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13233;

Registro13233 crear_registro13233(int id) {
    Registro13233 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
