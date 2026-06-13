// fichero 19389 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19389;

Registro19389 crear_registro19389(int id) {
    Registro19389 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19389(Registro19389 r) {
    return r.valor + r.id;
}
