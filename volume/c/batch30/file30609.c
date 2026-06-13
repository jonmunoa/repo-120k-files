// fichero 30609 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30609;

Registro30609 crear_registro30609(int id) {
    Registro30609 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30609(Registro30609 r) {
    return r.valor + r.id;
}
