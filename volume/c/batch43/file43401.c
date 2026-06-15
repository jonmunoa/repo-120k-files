// fichero 43401 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43401;

Registro43401 crear_registro43401(int id) {
    Registro43401 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
