// fichero 22525 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22525;

Registro22525 crear_registro22525(int id) {
    Registro22525 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
