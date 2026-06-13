// fichero 51633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro51633;

Registro51633 crear_registro51633(int id) {
    Registro51633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro51633(Registro51633 r) {
    return r.valor + r.id;
}
