// fichero 22533 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22533;

Registro22533 crear_registro22533(int id) {
    Registro22533 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22533(Registro22533 r) {
    return r.valor + r.id;
}
