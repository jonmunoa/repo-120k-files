// fichero 8405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8405;

Registro8405 crear_registro8405(int id) {
    Registro8405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8405(Registro8405 r) {
    return r.valor + r.id;
}
