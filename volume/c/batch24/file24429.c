// fichero 24429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24429;

Registro24429 crear_registro24429(int id) {
    Registro24429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24429(Registro24429 r) {
    return r.valor + r.id;
}
