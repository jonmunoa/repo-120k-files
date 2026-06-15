// fichero 22665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22665;

Registro22665 crear_registro22665(int id) {
    Registro22665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
