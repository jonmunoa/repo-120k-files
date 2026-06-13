// fichero 24665 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro24665;

Registro24665 crear_registro24665(int id) {
    Registro24665 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro24665(Registro24665 r) {
    return r.valor + r.id;
}
