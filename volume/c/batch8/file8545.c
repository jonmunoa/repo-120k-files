// fichero 8545 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8545;

Registro8545 crear_registro8545(int id) {
    Registro8545 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8545(Registro8545 r) {
    return r.valor + r.id;
}
