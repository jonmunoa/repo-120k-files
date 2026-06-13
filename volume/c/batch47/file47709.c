// fichero 47709 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro47709;

Registro47709 crear_registro47709(int id) {
    Registro47709 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro47709(Registro47709 r) {
    return r.valor + r.id;
}
