// fichero 33573 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33573;

Registro33573 crear_registro33573(int id) {
    Registro33573 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33573(Registro33573 r) {
    return r.valor + r.id;
}
