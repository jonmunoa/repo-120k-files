// fichero 22349 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22349;

Registro22349 crear_registro22349(int id) {
    Registro22349 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
