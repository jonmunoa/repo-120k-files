// fichero 29409 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29409;

Registro29409 crear_registro29409(int id) {
    Registro29409 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29409(Registro29409 r) {
    return r.valor + r.id;
}
