// fichero 22281 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22281;

Registro22281 crear_registro22281(int id) {
    Registro22281 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22281(Registro22281 r) {
    return r.valor + r.id;
}
