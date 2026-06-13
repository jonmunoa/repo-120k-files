// fichero 30825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30825;

Registro30825 crear_registro30825(int id) {
    Registro30825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30825(Registro30825 r) {
    return r.valor + r.id;
}
