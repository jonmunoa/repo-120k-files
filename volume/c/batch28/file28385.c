// fichero 28385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro28385;

Registro28385 crear_registro28385(int id) {
    Registro28385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro28385(Registro28385 r) {
    return r.valor + r.id;
}
