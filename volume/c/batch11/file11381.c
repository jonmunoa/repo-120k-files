// fichero 11381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro11381;

Registro11381 crear_registro11381(int id) {
    Registro11381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro11381(Registro11381 r) {
    return r.valor + r.id;
}
