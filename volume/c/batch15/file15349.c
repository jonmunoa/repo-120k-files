// fichero 15349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15349;

Registro15349 crear_registro15349(int id) {
    Registro15349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
