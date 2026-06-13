// fichero 32325 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro32325;

Registro32325 crear_registro32325(int id) {
    Registro32325 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro32325(Registro32325 r) {
    return r.valor + r.id;
}
