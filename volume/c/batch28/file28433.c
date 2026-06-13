// fichero 28433 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28433;

Registro28433 crear_registro28433(int id) {
    Registro28433 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28433(Registro28433 r) {
    return r.valor + r.id;
}
