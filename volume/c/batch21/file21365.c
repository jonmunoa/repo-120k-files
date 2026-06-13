// fichero 21365 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro21365;

Registro21365 crear_registro21365(int id) {
    Registro21365 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro21365(Registro21365 r) {
    return r.valor + r.id;
}
