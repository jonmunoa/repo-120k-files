// fichero 13329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13329;

Registro13329 crear_registro13329(int id) {
    Registro13329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
