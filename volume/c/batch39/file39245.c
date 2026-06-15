// fichero 39245 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39245;

Registro39245 crear_registro39245(int id) {
    Registro39245 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
