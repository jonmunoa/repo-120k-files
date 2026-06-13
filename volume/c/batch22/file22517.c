// fichero 22517 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22517;

Registro22517 crear_registro22517(int id) {
    Registro22517 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22517(Registro22517 r) {
    return r.valor + r.id;
}
