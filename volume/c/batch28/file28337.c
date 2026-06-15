// fichero 28337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro28337;

Registro28337 crear_registro28337(int id) {
    Registro28337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
