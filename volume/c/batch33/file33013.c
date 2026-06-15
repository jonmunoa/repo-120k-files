// fichero 33013 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro33013;

Registro33013 crear_registro33013(int id) {
    Registro33013 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
