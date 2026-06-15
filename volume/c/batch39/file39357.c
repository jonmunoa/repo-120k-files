// fichero 39357 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro39357;

Registro39357 crear_registro39357(int id) {
    Registro39357 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
