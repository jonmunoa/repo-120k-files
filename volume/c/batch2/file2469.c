// fichero 2469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2469;

Registro2469 crear_registro2469(int id) {
    Registro2469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2469(Registro2469 r) {
    return r.valor + r.id;
}
