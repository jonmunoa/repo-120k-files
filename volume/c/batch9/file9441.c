// fichero 9441 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro9441;

Registro9441 crear_registro9441(int id) {
    Registro9441 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro9441(Registro9441 r) {
    return r.valor + r.id;
}
