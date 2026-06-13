// fichero 30405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30405;

Registro30405 crear_registro30405(int id) {
    Registro30405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30405(Registro30405 r) {
    return r.valor + r.id;
}
