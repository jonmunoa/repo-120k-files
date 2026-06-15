// fichero 13305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13305;

Registro13305 crear_registro13305(int id) {
    Registro13305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
