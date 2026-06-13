// fichero 8925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8925;

Registro8925 crear_registro8925(int id) {
    Registro8925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8925(Registro8925 r) {
    return r.valor + r.id;
}
