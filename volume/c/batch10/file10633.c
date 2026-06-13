// fichero 10633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro10633;

Registro10633 crear_registro10633(int id) {
    Registro10633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro10633(Registro10633 r) {
    return r.valor + r.id;
}
