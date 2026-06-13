// fichero 19633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro19633;

Registro19633 crear_registro19633(int id) {
    Registro19633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro19633(Registro19633 r) {
    return r.valor + r.id;
}
