// fichero 39549 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39549;

Registro39549 crear_registro39549(int id) {
    Registro39549 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39549(Registro39549 r) {
    return r.valor + r.id;
}
