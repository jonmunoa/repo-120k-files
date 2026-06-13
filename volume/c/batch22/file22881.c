// fichero 22881 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22881;

Registro22881 crear_registro22881(int id) {
    Registro22881 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22881(Registro22881 r) {
    return r.valor + r.id;
}
