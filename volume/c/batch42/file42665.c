// fichero 42665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42665;

Registro42665 crear_registro42665(int id) {
    Registro42665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42665(Registro42665 r) {
    return r.valor + r.id;
}
