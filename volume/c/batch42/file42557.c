// fichero 42557 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42557;

Registro42557 crear_registro42557(int id) {
    Registro42557 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42557(Registro42557 r) {
    return r.valor + r.id;
}
