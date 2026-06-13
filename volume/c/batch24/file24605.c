// fichero 24605 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24605;

Registro24605 crear_registro24605(int id) {
    Registro24605 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24605(Registro24605 r) {
    return r.valor + r.id;
}
