// fichero 561 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro561;

Registro561 crear_registro561(int id) {
    Registro561 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro561(Registro561 r) {
    return r.valor + r.id;
}
