// fichero 39473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39473;

Registro39473 crear_registro39473(int id) {
    Registro39473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
