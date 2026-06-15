// fichero 32377 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro32377;

Registro32377 crear_registro32377(int id) {
    Registro32377 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
