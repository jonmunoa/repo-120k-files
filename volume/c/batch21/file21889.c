// fichero 21889 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21889;

Registro21889 crear_registro21889(int id) {
    Registro21889 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21889(Registro21889 r) {
    return r.valor + r.id;
}
