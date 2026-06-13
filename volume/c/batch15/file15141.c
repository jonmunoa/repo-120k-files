// fichero 15141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15141;

Registro15141 crear_registro15141(int id) {
    Registro15141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15141(Registro15141 r) {
    return r.valor + r.id;
}
