// fichero 14665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro14665;

Registro14665 crear_registro14665(int id) {
    Registro14665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro14665(Registro14665 r) {
    return r.valor + r.id;
}
