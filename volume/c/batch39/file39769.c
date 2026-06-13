// fichero 39769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39769;

Registro39769 crear_registro39769(int id) {
    Registro39769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39769(Registro39769 r) {
    return r.valor + r.id;
}
