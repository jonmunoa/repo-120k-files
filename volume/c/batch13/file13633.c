// fichero 13633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro13633;

Registro13633 crear_registro13633(int id) {
    Registro13633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro13633(Registro13633 r) {
    return r.valor + r.id;
}
