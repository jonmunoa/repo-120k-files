// fichero 43013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43013;

Registro43013 crear_registro43013(int id) {
    Registro43013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
