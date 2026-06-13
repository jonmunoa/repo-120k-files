// fichero 22989 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22989;

Registro22989 crear_registro22989(int id) {
    Registro22989 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22989(Registro22989 r) {
    return r.valor + r.id;
}
