// fichero 30337 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro30337;

Registro30337 crear_registro30337(int id) {
    Registro30337 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
