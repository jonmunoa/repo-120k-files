// fichero 5481 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5481;

Registro5481 crear_registro5481(int id) {
    Registro5481 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5481(Registro5481 r) {
    return r.valor + r.id;
}
