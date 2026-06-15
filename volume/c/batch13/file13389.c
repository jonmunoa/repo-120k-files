// fichero 13389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13389;

Registro13389 crear_registro13389(int id) {
    Registro13389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
