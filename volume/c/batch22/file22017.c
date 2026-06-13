// fichero 22017 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22017;

Registro22017 crear_registro22017(int id) {
    Registro22017 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22017(Registro22017 r) {
    return r.valor + r.id;
}
