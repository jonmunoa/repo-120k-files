// fichero 53665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53665;

Registro53665 crear_registro53665(int id) {
    Registro53665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53665(Registro53665 r) {
    return r.valor + r.id;
}
