// fichero 22437 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22437;

Registro22437 crear_registro22437(int id) {
    Registro22437 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22437(Registro22437 r) {
    return r.valor + r.id;
}
