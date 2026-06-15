// fichero 32473 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32473;

Registro32473 crear_registro32473(int id) {
    Registro32473 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
