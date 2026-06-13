// fichero 48877 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro48877;

Registro48877 crear_registro48877(int id) {
    Registro48877 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro48877(Registro48877 r) {
    return r.valor + r.id;
}
