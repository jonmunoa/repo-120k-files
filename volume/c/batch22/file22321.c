// fichero 22321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22321;

Registro22321 crear_registro22321(int id) {
    Registro22321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
