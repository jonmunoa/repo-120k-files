// fichero 22885 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22885;

Registro22885 crear_registro22885(int id) {
    Registro22885 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22885(Registro22885 r) {
    return r.valor + r.id;
}
