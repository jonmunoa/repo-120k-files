// fichero 39493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro39493;

Registro39493 crear_registro39493(int id) {
    Registro39493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro39493(Registro39493 r) {
    return r.valor + r.id;
}
