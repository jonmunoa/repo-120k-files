// fichero 39469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39469;

Registro39469 crear_registro39469(int id) {
    Registro39469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39469(Registro39469 r) {
    return r.valor + r.id;
}
