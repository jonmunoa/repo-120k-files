// fichero 2653 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2653;

Registro2653 crear_registro2653(int id) {
    Registro2653 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2653(Registro2653 r) {
    return r.valor + r.id;
}
