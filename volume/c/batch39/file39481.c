// fichero 39481 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39481;

Registro39481 crear_registro39481(int id) {
    Registro39481 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
