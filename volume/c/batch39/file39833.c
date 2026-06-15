// fichero 39833 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39833;

Registro39833 crear_registro39833(int id) {
    Registro39833 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
