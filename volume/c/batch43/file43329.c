// fichero 43329 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro43329;

Registro43329 crear_registro43329(int id) {
    Registro43329 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
