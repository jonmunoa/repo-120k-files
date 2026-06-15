// fichero 15405 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15405;

Registro15405 crear_registro15405(int id) {
    Registro15405 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
