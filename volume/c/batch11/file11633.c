// fichero 11633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11633;

Registro11633 crear_registro11633(int id) {
    Registro11633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11633(Registro11633 r) {
    return r.valor + r.id;
}
