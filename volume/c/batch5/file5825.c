// fichero 5825 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5825;

Registro5825 crear_registro5825(int id) {
    Registro5825 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5825(Registro5825 r) {
    return r.valor + r.id;
}
