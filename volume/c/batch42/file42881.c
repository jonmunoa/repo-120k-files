// fichero 42881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro42881;

Registro42881 crear_registro42881(int id) {
    Registro42881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro42881(Registro42881 r) {
    return r.valor + r.id;
}
