// fichero 21481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21481;

Registro21481 crear_registro21481(int id) {
    Registro21481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21481(Registro21481 r) {
    return r.valor + r.id;
}
