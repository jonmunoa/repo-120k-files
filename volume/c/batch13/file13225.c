// fichero 13225 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13225;

Registro13225 crear_registro13225(int id) {
    Registro13225 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
