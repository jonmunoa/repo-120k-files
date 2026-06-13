// fichero 22493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro22493;

Registro22493 crear_registro22493(int id) {
    Registro22493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro22493(Registro22493 r) {
    return r.valor + r.id;
}
