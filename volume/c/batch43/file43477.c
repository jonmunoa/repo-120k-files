// fichero 43477 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43477;

Registro43477 crear_registro43477(int id) {
    Registro43477 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
