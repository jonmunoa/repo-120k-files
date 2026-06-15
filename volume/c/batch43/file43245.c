// fichero 43245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43245;

Registro43245 crear_registro43245(int id) {
    Registro43245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
