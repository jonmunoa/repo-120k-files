// fichero 13037 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13037;

Registro13037 crear_registro13037(int id) {
    Registro13037 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
