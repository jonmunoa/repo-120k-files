// fichero 24405 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24405;

Registro24405 crear_registro24405(int id) {
    Registro24405 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24405(Registro24405 r) {
    return r.valor + r.id;
}
