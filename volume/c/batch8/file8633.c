// fichero 8633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8633;

Registro8633 crear_registro8633(int id) {
    Registro8633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8633(Registro8633 r) {
    return r.valor + r.id;
}
