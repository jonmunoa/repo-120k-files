// fichero 5129 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5129;

Registro5129 crear_registro5129(int id) {
    Registro5129 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5129(Registro5129 r) {
    return r.valor + r.id;
}
