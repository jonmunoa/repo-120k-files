// fichero 15665 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15665;

Registro15665 crear_registro15665(int id) {
    Registro15665 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
