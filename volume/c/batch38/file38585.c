// fichero 38585 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro38585;

Registro38585 crear_registro38585(int id) {
    Registro38585 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro38585(Registro38585 r) {
    return r.valor + r.id;
}
