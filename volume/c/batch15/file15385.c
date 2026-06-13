// fichero 15385 -- struct + funciones
#include <stdlib.h>

typedef struct {
    int id;
    double valor;
} Registro15385;

Registro15385 crear_registro15385(int id) {
    Registro15385 r;
    r.id = id;
    r.valor = id * 1.5;
    return r;
}

double total_registro15385(Registro15385 r) {
    return r.valor + r.id;
}
