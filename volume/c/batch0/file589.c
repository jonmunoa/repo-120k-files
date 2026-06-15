// fichero 589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro589;

Registro589 crear_registro589(int id) {
    Registro589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
