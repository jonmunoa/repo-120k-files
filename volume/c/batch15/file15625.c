// fichero 15625 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15625;

Registro15625 crear_registro15625(int id) {
    Registro15625 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15625(Registro15625 r) {
    return r.valor + r.id;
}
