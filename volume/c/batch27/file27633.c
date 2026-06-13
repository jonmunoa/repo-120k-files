// fichero 27633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27633;

Registro27633 crear_registro27633(int id) {
    Registro27633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27633(Registro27633 r) {
    return r.valor + r.id;
}
