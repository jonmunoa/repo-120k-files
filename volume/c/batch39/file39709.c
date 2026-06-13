// fichero 39709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39709;

Registro39709 crear_registro39709(int id) {
    Registro39709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39709(Registro39709 r) {
    return r.valor + r.id;
}
