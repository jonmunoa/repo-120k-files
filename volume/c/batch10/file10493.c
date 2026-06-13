// fichero 10493 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10493;

Registro10493 crear_registro10493(int id) {
    Registro10493 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10493(Registro10493 r) {
    return r.valor + r.id;
}
