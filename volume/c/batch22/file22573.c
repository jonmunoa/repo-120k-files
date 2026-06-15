// fichero 22573 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22573;

Registro22573 crear_registro22573(int id) {
    Registro22573 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
