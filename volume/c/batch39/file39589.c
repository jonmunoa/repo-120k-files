// fichero 39589 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39589;

Registro39589 crear_registro39589(int id) {
    Registro39589 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
