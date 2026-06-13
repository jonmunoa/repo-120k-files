// fichero 42117 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42117;

Registro42117 crear_registro42117(int id) {
    Registro42117 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42117(Registro42117 r) {
    return r.valor + r.id;
}
