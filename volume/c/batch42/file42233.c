// fichero 42233 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42233;

Registro42233 crear_registro42233(int id) {
    Registro42233 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42233(Registro42233 r) {
    return r.valor + r.id;
}
