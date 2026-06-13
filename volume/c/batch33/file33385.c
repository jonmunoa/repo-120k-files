// fichero 33385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro33385;

Registro33385 crear_registro33385(int id) {
    Registro33385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro33385(Registro33385 r) {
    return r.valor + r.id;
}
