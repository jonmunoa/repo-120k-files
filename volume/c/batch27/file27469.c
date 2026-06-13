// fichero 27469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro27469;

Registro27469 crear_registro27469(int id) {
    Registro27469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro27469(Registro27469 r) {
    return r.valor + r.id;
}
