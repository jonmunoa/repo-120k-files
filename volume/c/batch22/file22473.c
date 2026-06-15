// fichero 22473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22473;

Registro22473 crear_registro22473(int id) {
    Registro22473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
