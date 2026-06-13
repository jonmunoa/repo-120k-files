// fichero 44633 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro44633;

Registro44633 crear_registro44633(int id) {
    Registro44633 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro44633(Registro44633 r) {
    return r.valor + r.id;
}
