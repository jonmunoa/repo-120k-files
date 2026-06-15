// fichero 15589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15589;

Registro15589 crear_registro15589(int id) {
    Registro15589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
