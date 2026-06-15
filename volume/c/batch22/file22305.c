// fichero 22305 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22305;

Registro22305 crear_registro22305(int id) {
    Registro22305 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
