// fichero 22769 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22769;

Registro22769 crear_registro22769(int id) {
    Registro22769 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22769(Registro22769 r) {
    return r.valor + r.id;
}
