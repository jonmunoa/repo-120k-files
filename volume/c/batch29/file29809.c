// fichero 29809 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro29809;

Registro29809 crear_registro29809(int id) {
    Registro29809 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro29809(Registro29809 r) {
    return r.valor + r.id;
}
