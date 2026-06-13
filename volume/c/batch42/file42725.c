// fichero 42725 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42725;

Registro42725 crear_registro42725(int id) {
    Registro42725 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42725(Registro42725 r) {
    return r.valor + r.id;
}
