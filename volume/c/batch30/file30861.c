// fichero 30861 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30861;

Registro30861 crear_registro30861(int id) {
    Registro30861 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30861(Registro30861 r) {
    return r.valor + r.id;
}
