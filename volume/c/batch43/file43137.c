// fichero 43137 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43137;

Registro43137 crear_registro43137(int id) {
    Registro43137 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
