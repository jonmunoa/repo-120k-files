// fichero 22509 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22509;

Registro22509 crear_registro22509(int id) {
    Registro22509 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22509(Registro22509 r) {
    return r.valor + r.id;
}
