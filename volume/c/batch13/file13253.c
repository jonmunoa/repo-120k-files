// fichero 13253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13253;

Registro13253 crear_registro13253(int id) {
    Registro13253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
