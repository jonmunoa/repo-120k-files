// fichero 18481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro18481;

Registro18481 crear_registro18481(int id) {
    Registro18481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro18481(Registro18481 r) {
    return r.valor + r.id;
}
