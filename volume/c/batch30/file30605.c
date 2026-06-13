// fichero 30605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro30605;

Registro30605 crear_registro30605(int id) {
    Registro30605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro30605(Registro30605 r) {
    return r.valor + r.id;
}
