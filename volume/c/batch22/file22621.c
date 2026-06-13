// fichero 22621 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22621;

Registro22621 crear_registro22621(int id) {
    Registro22621 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22621(Registro22621 r) {
    return r.valor + r.id;
}
