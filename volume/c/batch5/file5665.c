// fichero 5665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro5665;

Registro5665 crear_registro5665(int id) {
    Registro5665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro5665(Registro5665 r) {
    return r.valor + r.id;
}
