// fichero 13245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13245;

Registro13245 crear_registro13245(int id) {
    Registro13245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
