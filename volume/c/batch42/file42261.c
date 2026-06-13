// fichero 42261 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42261;

Registro42261 crear_registro42261(int id) {
    Registro42261 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42261(Registro42261 r) {
    return r.valor + r.id;
}
