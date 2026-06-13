// fichero 42509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42509;

Registro42509 crear_registro42509(int id) {
    Registro42509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42509(Registro42509 r) {
    return r.valor + r.id;
}
