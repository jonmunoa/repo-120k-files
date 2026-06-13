// fichero 53573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro53573;

Registro53573 crear_registro53573(int id) {
    Registro53573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro53573(Registro53573 r) {
    return r.valor + r.id;
}
