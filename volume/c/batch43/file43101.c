// fichero 43101 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43101;

Registro43101 crear_registro43101(int id) {
    Registro43101 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
