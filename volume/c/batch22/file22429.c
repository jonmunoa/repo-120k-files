// fichero 22429 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22429;

Registro22429 crear_registro22429(int id) {
    Registro22429 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22429(Registro22429 r) {
    return r.valor + r.id;
}
