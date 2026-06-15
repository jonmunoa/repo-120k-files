// fichero 15925 -- struct + funciones -- MODIFICADO
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
    int version;
} Registro15925;

Registro15925 crear_registro15925(int id) {
    Registro15925 r;
    r.id = id;
    r.valor = id * 1.5;
    r.version = 2;
    return r;
}
