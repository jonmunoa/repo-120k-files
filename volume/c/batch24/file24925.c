// fichero 24925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24925;

Registro24925 crear_registro24925(int id) {
    Registro24925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24925(Registro24925 r) {
    return r.valor + r.id;
}
