// fichero 15341 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15341;

Registro15341 crear_registro15341(int id) {
    Registro15341 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
