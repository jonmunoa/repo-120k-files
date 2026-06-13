// fichero 30665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30665;

Registro30665 crear_registro30665(int id) {
    Registro30665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30665(Registro30665 r) {
    return r.valor + r.id;
}
