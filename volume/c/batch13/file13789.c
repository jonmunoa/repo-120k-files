// fichero 13789 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13789;

Registro13789 crear_registro13789(int id) {
    Registro13789 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
