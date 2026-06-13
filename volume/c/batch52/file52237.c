// fichero 52237 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro52237;

Registro52237 crear_registro52237(int id) {
    Registro52237 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro52237(Registro52237 r) {
    return r.valor + r.id;
}
