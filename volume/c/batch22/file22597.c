// fichero 22597 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro22597;

Registro22597 crear_registro22597(int id) {
    Registro22597 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
