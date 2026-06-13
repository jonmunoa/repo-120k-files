// fichero 28925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28925;

Registro28925 crear_registro28925(int id) {
    Registro28925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28925(Registro28925 r) {
    return r.valor + r.id;
}
