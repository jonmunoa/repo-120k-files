// fichero 36665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro36665;

Registro36665 crear_registro36665(int id) {
    Registro36665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro36665(Registro36665 r) {
    return r.valor + r.id;
}
