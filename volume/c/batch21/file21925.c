// fichero 21925 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21925;

Registro21925 crear_registro21925(int id) {
    Registro21925 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21925(Registro21925 r) {
    return r.valor + r.id;
}
