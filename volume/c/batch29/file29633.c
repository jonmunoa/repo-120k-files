// fichero 29633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29633;

Registro29633 crear_registro29633(int id) {
    Registro29633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29633(Registro29633 r) {
    return r.valor + r.id;
}
