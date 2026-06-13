// fichero 22469 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22469;

Registro22469 crear_registro22469(int id) {
    Registro22469 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22469(Registro22469 r) {
    return r.valor + r.id;
}
