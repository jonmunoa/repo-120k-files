// fichero 37449 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro37449;

Registro37449 crear_registro37449(int id) {
    Registro37449 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro37449(Registro37449 r) {
    return r.valor + r.id;
}
