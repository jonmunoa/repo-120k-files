// fichero 405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro405;

Registro405 crear_registro405(int id) {
    Registro405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro405(Registro405 r) {
    return r.valor + r.id;
}
