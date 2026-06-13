// fichero 18405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18405;

Registro18405 crear_registro18405(int id) {
    Registro18405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18405(Registro18405 r) {
    return r.valor + r.id;
}
