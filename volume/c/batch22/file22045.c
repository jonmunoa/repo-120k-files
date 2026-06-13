// fichero 22045 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22045;

Registro22045 crear_registro22045(int id) {
    Registro22045 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22045(Registro22045 r) {
    return r.valor + r.id;
}
