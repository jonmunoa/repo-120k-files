// fichero 37429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37429;

Registro37429 crear_registro37429(int id) {
    Registro37429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37429(Registro37429 r) {
    return r.valor + r.id;
}
