// fichero 39641 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39641;

Registro39641 crear_registro39641(int id) {
    Registro39641 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
