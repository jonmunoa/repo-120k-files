// fichero 19665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19665;

Registro19665 crear_registro19665(int id) {
    Registro19665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19665(Registro19665 r) {
    return r.valor + r.id;
}
