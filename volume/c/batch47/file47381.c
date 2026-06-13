// fichero 47381 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47381;

Registro47381 crear_registro47381(int id) {
    Registro47381 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47381(Registro47381 r) {
    return r.valor + r.id;
}
