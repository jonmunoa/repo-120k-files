// fichero 23633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro23633;

Registro23633 crear_registro23633(int id) {
    Registro23633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro23633(Registro23633 r) {
    return r.valor + r.id;
}
