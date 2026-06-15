// fichero 22389 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22389;

Registro22389 crear_registro22389(int id) {
    Registro22389 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
