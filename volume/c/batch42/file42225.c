// fichero 42225 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42225;

Registro42225 crear_registro42225(int id) {
    Registro42225 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42225(Registro42225 r) {
    return r.valor + r.id;
}
