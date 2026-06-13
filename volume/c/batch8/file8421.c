// fichero 8421 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro8421;

Registro8421 crear_registro8421(int id) {
    Registro8421 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro8421(Registro8421 r) {
    return r.valor + r.id;
}
