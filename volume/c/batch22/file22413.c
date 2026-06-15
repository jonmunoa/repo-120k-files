// fichero 22413 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22413;

Registro22413 crear_registro22413(int id) {
    Registro22413 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
