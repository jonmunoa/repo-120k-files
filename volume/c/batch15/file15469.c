// fichero 15469 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15469;

Registro15469 crear_registro15469(int id) {
    Registro15469 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
