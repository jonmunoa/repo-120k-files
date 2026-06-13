// fichero 2385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro2385;

Registro2385 crear_registro2385(int id) {
    Registro2385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro2385(Registro2385 r) {
    return r.valor + r.id;
}
