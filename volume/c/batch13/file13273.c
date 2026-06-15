// fichero 13273 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13273;

Registro13273 crear_registro13273(int id) {
    Registro13273 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
