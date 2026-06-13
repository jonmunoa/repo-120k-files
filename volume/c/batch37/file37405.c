// fichero 37405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37405;

Registro37405 crear_registro37405(int id) {
    Registro37405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37405(Registro37405 r) {
    return r.valor + r.id;
}
