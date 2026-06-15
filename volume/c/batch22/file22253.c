// fichero 22253 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22253;

Registro22253 crear_registro22253(int id) {
    Registro22253 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
