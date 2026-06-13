// fichero 34141 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro34141;

Registro34141 crear_registro34141(int id) {
    Registro34141 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro34141(Registro34141 r) {
    return r.valor + r.id;
}
