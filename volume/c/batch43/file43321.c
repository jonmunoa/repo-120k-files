// fichero 43321 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43321;

Registro43321 crear_registro43321(int id) {
    Registro43321 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
