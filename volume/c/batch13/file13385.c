// fichero 13385 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro13385;

Registro13385 crear_registro13385(int id) {
    Registro13385 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
