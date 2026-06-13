// fichero 37469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37469;

Registro37469 crear_registro37469(int id) {
    Registro37469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37469(Registro37469 r) {
    return r.valor + r.id;
}
