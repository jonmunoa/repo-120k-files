// fichero 32505 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32505;

Registro32505 crear_registro32505(int id) {
    Registro32505 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32505(Registro32505 r) {
    return r.valor + r.id;
}
