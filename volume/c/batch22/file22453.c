// fichero 22453 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22453;

Registro22453 crear_registro22453(int id) {
    Registro22453 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22453(Registro22453 r) {
    return r.valor + r.id;
}
