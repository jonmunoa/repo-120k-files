// fichero 37665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37665;

Registro37665 crear_registro37665(int id) {
    Registro37665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37665(Registro37665 r) {
    return r.valor + r.id;
}
