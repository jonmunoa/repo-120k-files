// fichero 43665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43665;

Registro43665 crear_registro43665(int id) {
    Registro43665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
