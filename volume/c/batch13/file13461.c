// fichero 13461 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13461;

Registro13461 crear_registro13461(int id) {
    Registro13461 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
